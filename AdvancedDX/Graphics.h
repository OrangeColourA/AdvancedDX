#pragma once



/*

void Graphics::DrawLine(Vec2D& v0, Vec2D& v1, Color c)
{

	int delta_x = ((int)v1.get_x() - (int)v0.get_x());
	int delta_y = ((int)v1.get_y() - (int)v0.get_y());

	int dx = 1;
	int dy = 1;

	if (delta_y < 0)
	{
		dy = -1;
	}
	if (delta_x < 0)
	{
		dx = -1;
	}

	float sloap = (float)delta_y / (float)delta_x;

	int x_pos = (int)v0.get_x();
	int y_pos = (int)v0.get_y();


	if (abs(sloap) < 1.0f)
	{
		int p_k = 2 * delta_y * dy - delta_x * dx;


		while (x_pos != (int)v1.get_x())
		{

			if (x_pos >= 0 &&
				x_pos < int(Graphics::ScreenWidth) &&
				y_pos >= 0 &&
				y_pos < int(Graphics::ScreenHeight))
			{
				PutPixel(x_pos, y_pos, c);
			}

			if (p_k < 0)
			{
				p_k = p_k + 2 * delta_y * dy;
			}
			else
			{
				p_k = p_k + 2 * delta_y * dy - 2 * delta_x * dx;
				y_pos += dy;
			}
			x_pos += dx;
		}
	}
	else
	{
		int p_k = 2 * delta_x * dx - delta_y * dy;


		while (y_pos != (int)v1.get_y())
		{

			if (x_pos >= 0 &&
				x_pos < int(Graphics::ScreenWidth) &&
				y_pos >= 0 &&
				y_pos < int(Graphics::ScreenHeight))
			{
				PutPixel(x_pos, y_pos, c);
			}

			if (p_k < 0)
			{
				p_k = p_k + 2 * delta_x * dx;
			}
			else
			{
				p_k = p_k + 2 * delta_x * dx - 2 * delta_y * dy;
				x_pos += dx;
			}
			y_pos += dy;
		}

	}

}














*/