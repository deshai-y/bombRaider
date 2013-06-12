#ifndef GDL_TEXT_HPP
# define GDL_TEXT_HPP

# include <string>
# include "Color.hpp"
# include "Resource.hpp"

namespace gdl
{
	class TextImpl;

	class Text : private Resource<TextImpl>
	{
	public:
		////////////////////////////////////////////////////////////
		/// Default constructor.
		////////////////////////////////////////////////////////////
		Text(void);

		////////////////////////////////////////////////////////////
		/// Constructor.
		///
		/// \param fontPath The font path.
		////////////////////////////////////////////////////////////
		Text(std::string const & fontPath);

		////////////////////////////////////////////////////////////
		/// Destructor.
		////////////////////////////////////////////////////////////
		~Text(void);

		////////////////////////////////////////////////////////////
		/// to set the text in the screen
		////////////////////////////////////////////////////////////
		void		setText(std::string const & text);

		////////////////////////////////////////////////////////////
		/// to set the font path.
		////////////////////////////////////////////////////////////
		bool		setFont(std::string const & fontPath);

		////////////////////////////////////////////////////////////
		/// \deprecated to set the color of the text
		////////////////////////////////////////////////////////////
		void		setColor(gdl::Color const & color);

		////////////////////////////////////////////////////////////
		/// to set the size of your text
		////////////////////////////////////////////////////////////
		void		setSize(unsigned int size);

		////////////////////////////////////////////////////////////
		/// to set the position of the text in the screen
		////////////////////////////////////////////////////////////
	        void		setPosition(unsigned int x, unsigned int y);

		////////////////////////////////////////////////////////////
		/// \attention Text::draw have to be the last draw of your
		/// frame rendering
		////////////////////////////////////////////////////////////
		void		draw();

		using Resource<TextImpl>::isValid;

	private:
		friend class TextImpl;
	};
}

#endif /* !GDL_TEXT_HPP */
