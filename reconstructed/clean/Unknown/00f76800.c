// Function: FUN_00f76800
// Address: 00f76800
// Size: 670 bytes
// Class: Unknown
// String references:
//   "crypto/bio/b_addr.c"
//   "%d"

uint64_t FUN_00f76800(int64_t *param_1,int64_t *param_2)

{
  int64_t lVar1;
  ushort uVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  char *buf;
  int64_t this_ptr;
  segment_command *file;
  uint64_t uVar6;
  char local_468 [16];
  int line;
  int in_stack_fffffffffffffbb8;
  
  lVar1 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  iVar3 = _BIO_sock_init();
  uVar6 = 0;
  if (iVar3 != 1) goto LAB_00f76a74;
  ___bzero();
  line = 0;
  local_468[0] = '\0';
  local_468[1] = '\0';
  local_468[2] = '\0';
  local_468[3] = '\0';
  local_468[4] = '\0';
  local_468[5] = '\0';
  local_468[6] = '\0';
  local_468[7] = '\0';
  local_468[8] = '\0';
  local_468[9] = '\0';
  local_468[10] = '\0';
  local_468[0xb] = '\0';
  local_468[0xc] = '\0';
  local_468[0xd] = '\0';
  local_468[0xe] = '\0';
  local_468[0xf] = '\0';
  pcVar5 = local_468;
  buf = (char *)((int64_t)&segment_command_000003d8.fileoff + 1);
  file = &segment_command_00000020;
  iVar3 = _getnameinfo((sockaddr *)((int64_t)&segment_command_000003d8.fileoff + 1),
                       (socklen_t)&stack0xfffffffffffffbb8,pcVar5,0x20,(char *)0x0,0,
                       in_stack_fffffffffffffbb8);
  if (iVar3 != 0) {
    if (iVar3 == 0xb) {
      piVar4 = ___error();
      _ERR_put_error(0x20093ba,*piVar4,0xd6,(char *)file,line);
      _ERR_put_error(0x20093ba,2,0xd7,(char *)file,line);
    }
    else {
      iVar3 = 0x20093ba;
      _ERR_put_error(0x20093ba,2,0xdb,(char *)file,line);
      _gai_strerror(iVar3);
      uVar6 = 0;
      _ERR_add_error_data(iVar3);
    }
    goto LAB_00f76a74;
  }
  if (local_468[0] == '\0') {
    if ((*(char *)(this_ptr + 1) == '\x1e') || (*(char *)(this_ptr + 1) == '\x02')) {
      uVar2 = *(ushort *)(this_ptr + 2);
    }
    else {
      uVar2 = 0;
    }
    buf = (char *)(uint64_t)(ushort)(uVar2 << 8 | uVar2 >> 8);
    _BIO_snprintf(buf,0x2031e88,pcVar5);
  }
  iVar3 = (int)pcVar5;
  if (param_2 != (int64_t *)0x0) {
    pcVar5 = _CRYPTO_strdup(buf,(char *)((int64_t)&section_000000b8.align + 1),iVar3);
    *param_2 = (int64_t)pcVar5;
  }
  if (param_1 != (int64_t *)0x0) {
    pcVar5 = _CRYPTO_strdup(buf,(char *)((int64_t)&section_000000b8.align + 3),iVar3);
    *param_1 = (int64_t)pcVar5;
  }
  if ((param_2 == (int64_t *)0x0) || (*param_2 != 0)) {
    uVar6 = 1;
    if ((param_1 == (int64_t *)0x0) || (*param_1 != 0)) goto LAB_00f76a74;
    if (param_2 != (int64_t *)0x0) {
      _CRYPTO_free(buf);
      *param_2 = 0;
    }
LAB_00f76a38:
    _CRYPTO_free(buf);
    *param_1 = 0;
  }
  else {
    _CRYPTO_free(buf);
    *param_2 = 0;
    if (param_1 != (int64_t *)0x0) goto LAB_00f76a38;
  }
  _ERR_put_error(0x20093ba,0x41,0x105,(char *)file,line);
  uVar6 = 0;
LAB_00f76a74:
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != lVar1) {
                        ___stack_chk_fail();
  }
  return uVar6;
}

