// Function: FUN_00f7cc20
// Address: 00f7cc20
// Size: 681 bytes
// Class: GNString
// String references:
//   "crypto/bio/bss_file.c"
//   "fopen('"
//   "','"
//   "')"
//   "a+"
//   "r+"
//   "fflush()"
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


int FUN_00f7cc20(int64_t *param_1,uint param_2,int param_3,char *param_4)

{
  long lVar1;
  int iVar2;
  int *piVar3;
  int64_t lVar4;
  uint *b;
  int unaff_ESI;
  int64_t this_ptr;
  int reason;
  int unaff_R14D;
  uint8_t local_2c [4];
  
  lVar4 = *(int64_t *)(this_ptr + 0x38);
  iVar2 = 1;
  b = &switchD_00f7cc55::switchdataD_00f7cecc;
  switch(unaff_ESI) {
  case 1:
switchD_00f7cc55_caseD_1:
    iVar2 = _fseek((FILE *)b,0,param_3);
    break;
  case 2:
    iVar2 = _feof((FILE *)&switchD_00f7cc55::switchdataD_00f7cecc);
    break;
  case 3:
switchD_00f7cc55_caseD_3:
    lVar1 = _ftell((FILE *)b);
    return lVar1;
  case 4:
  case 5:
  case 6:
  case 7:
  case 10:
    goto switchD_00f7cc55_caseD_4;
  case 8:
    iVar2 = *(int *)(this_ptr + 0x24);
    break;
  case 9:
    *(uint *)(this_ptr + 0x24) = param_2;
    break;
  case 0xb:
    iVar2 = _fflush((FILE *)&switchD_00f7cc55::switchdataD_00f7cecc);
    if (iVar2 != -1) {
      return 1;
    }
    piVar3 = ___error();
    iVar2 = 0x2009a36;
    _ERR_put_error(0x2009a36,*piVar3,0x13c,param_4,unaff_R14D);
    _ERR_add_error_data(iVar2);
    reason = 0x13e;
LAB_00f7ce8e:
    iVar2 = 0;
    _ERR_put_error(0x2009a36,2,reason,param_4,unaff_R14D);
    break;
  case 0xc:
    break;
  default:
    if (0x1b < unaff_ESI - 0x6aU) goto switchD_00f7cc55_caseD_4;
    b = (uint *)((int64_t)&switchD_00f7cc81::switchdataD_00f7cefc +
                (int64_t)(int)(&switchD_00f7cc81::switchdataD_00f7cefc)[unaff_ESI - 0x6aU]);
    switch(unaff_ESI) {
    case 0x6a:
      if (((*(int *)(this_ptr + 0x24) != 0) && (*(int *)(this_ptr + 0x20) != 0)) && (lVar4 != 0))
      {
        _fclose((FILE *)b);
        *(void*)(this_ptr + 0x28) = 0;
      }
      *(uint *)(this_ptr + 0x24) = param_2 & 1;
      *(int64_t **)(this_ptr + 0x38) = param_1;
      *(void*)(this_ptr + 0x20) = 1;
      break;
    case 0x6b:
      if (param_1 != (int64_t *)0x0) {
        *param_1 = lVar4;
      }
      break;
    case 0x6c:
      if (*(int *)(this_ptr + 0x24) != 0) {
        if ((*(int *)(this_ptr + 0x20) != 0) && (lVar4 != 0)) {
          _fclose((FILE *)b);
          *(void*)(this_ptr + 0x38) = 0;
          *(void*)(this_ptr + 0x28) = 0;
        }
        *(void*)(this_ptr + 0x20) = 0;
      }
      *(uint *)(this_ptr + 0x24) = param_2 & 1;
      if ((((param_2 & 8) != 0) || ((~param_2 & 6) == 0)) || ((param_2 & 6) != 0)) {
        iVar2 = 4;
        _OPENSSL_strlcpy();
        lVar4 = _openssl_fopen();
        if (lVar4 != 0) {
          *(int64_t *)(this_ptr + 0x38) = lVar4;
          *(void*)(this_ptr + 0x20) = 1;
          _BIO_clear_flags((BIO *)b,iVar2);
          return 1;
        }
        piVar3 = ___error();
        _ERR_put_error(0x2009a36,*piVar3,0x120,param_4,unaff_R14D);
        param_4 = "\')";
        _ERR_add_error_data(0x2009a54,param_1,local_2c);
        reason = 0x122;
        goto LAB_00f7ce8e;
      }
      _ERR_put_error(0x2009a36,0x65,0x111,param_4,unaff_R14D);
    default:
switchD_00f7cc55_caseD_4:
      iVar2 = 0;
      break;
    case 0x80:
      goto switchD_00f7cc55_caseD_1;
    case 0x85:
      goto switchD_00f7cc55_caseD_3;
    }
  }
  return iVar2;
}

