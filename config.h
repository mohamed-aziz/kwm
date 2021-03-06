static const char *fonts[] = { "monospace:size=10" };

#define NOMODIFIER 0
#define LEADERMOD ControlMask
#define LEADERKEY XK_t

static const char *dmenucmd[] = {"dmenu_run", NULL };
static const char *termcmd[]  = {"st", NULL };
static const char *chgcmd[]   = {"dmenu", "-l", "10", NULL};
static const char *emacs[]    = {"emacs",  NULL, NULL, NULL, "Emacs" };
static const char *browser[]  = {"firefox", NULL, NULL, NULL, "Firefox-esr" };
static const int borderpx     = 2;

/* Colors */
static const char col_gray1[]       = "#222222";
static const char col_gray2[]       = "#444444";
static const char col_gray3[]       = "#bbbbbb";
static const char col_gray4[]       = "#eeeeee";
static const char col_cyan[]        = "#ffffff";
static const char *colors[][3]      = {
	/*               fg         bg         border   */
	[SchemeNorm] = { col_gray3, col_gray1, col_gray2 },
	[SchemeSel]  = { col_gray4, col_cyan,  col_cyan  },
};


static Keys keys = {
	&(Keys)
	{NULL,
	 &(Keys)
	 {NULL,
	  &(Keys)
	  {NULL,
	   &(Keys)
	   {NULL,
	    &(Keys)
	    {NULL,
	     &(Keys)
	     {NULL,
	      &(Keys)
	      {NULL,
	       &(Keys)
	       {NULL,
		&(Keys)
		{NULL,
		 &(Keys)
		 {NULL,
		  &(Keys)
		  {NULL,
		   &(Keys)
		   {NULL,
		    &(Keys)
		    {NULL,
		     &(Keys)
		     {NULL,
		      &(Keys)
		      {NULL,
		       NULL,
		       {NOMODIFIER, XK_k, stopclient, {0}}}, /* C-t k */
		      {NOMODIFIER, XK_quotedbl, changeclient, {0}}}, /* C-t " */
		     {LEADERMOD, XK_f, runorraise, {.v = browser}}}, /* C-t C-f */
		    {LEADERMOD, XK_e, runorraise, {.v = emacs}}}, /* C-t C-e */
		   {LEADERMOD, XK_t, selclient, {0}}}, /* C-t C-t */
		  ShiftMask, XK_o, prevframe, {0}}, /* C-t O */
		 {NOMODIFIER, XK_o, nextframe, {0}}}, /* C-t o */
		{NOMODIFIER, XK_p, prevclient, {0}}}, /* C-t p */
	       {NOMODIFIER, XK_n, nextclient, {0}}}, /* C-t n */
	      {ShiftMask, XK_k, killclient, {0}}}, /* C-t K */
	     {NOMODIFIER, XK_q, quit, {0}}}, /* C-t q */
	    {LEADERMOD, XK_g, toggleleader, {.i = 0}}}, /* C-t C-g */
	   {NOMODIFIER, XK_b, banish, {0}}}, /* C-t b */
	  {NOMODIFIER, XK_c, spawn, {.v = termcmd}}}, /* C-t c */
	 {NOMODIFIER, XK_exclam, spawn, {.v = dmenucmd}}}, /* C-t ! */
	NULL,
	{LEADERMOD, LEADERKEY, toggleleader, {.i = 1}}	    /* C-t */
};
