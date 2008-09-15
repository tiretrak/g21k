extern int write_file_header( FILHDR *file_header, FILE *fp);
extern int write_optional_header( AOUTHDR *optional_header, FILE *fp);
extern int write_section_header( SCNHDR *section_header, FILE *fp );
extern int write_symbol( SYMENT *symbol_ptr, FILE *fp );
extern int write_relocation_info( RELOC *relocation_ptr, FILE *fp );
extern int write_aux_info( AUXENT *auxiliary_ptr, FILE *fp, int aux_class );
extern int write_line_info( LINENO *line_ptr, FILE *fp );
extern int read_file_header( FILHDR *file_header, FILE *fp);
extern int read_optional_header( AOUTHDR *optional_header, FILE *fp);
extern int read_section_header( SCNHDR *section_header, FILE *fp );
extern int read_symbol( SYMENT *symbol_ptr, FILE *fp );
extern int read_relocation_info( RELOC *relocation_ptr, FILE *fp );
extern int read_aux_info( AUXENT *auxiliary_ptr, FILE *fp, int aux_class );
extern int read_line_info( LINENO *line_ptr, FILE *fp );