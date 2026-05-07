// Function: FUN_010bcdc0
// Address: 010bcdc0
// Size: 838 bytes
// Class: Unknown
// String references:
//   "%x%s"
//   "%s%02x"
//   "[%d]"
//   "%d.%d.%d.%d"

uint64_t FUN_010bcdc0(BIO *param_1,char param_2,size_t param_3)

{
  int iVar1;
  uint64_t uVar2;
  uint uVar3;
  BIO *bio;
  char *pcVar4;
  byte bVar5;
  char *format;
  int64_t lVar6;
  uint64_t uVar7;
  int unaff_ESI;
  uint64_t uVar8;
  byte local_48;
  byte local_47;
  byte local_46;
  byte local_45;
  char local_44;
  char local_43;
  char local_42;
  char local_41;
  char local_40;
  char local_3f;
  char local_3e;
  char local_3d;
  char local_3c;
  char local_3b;
  char local_3a;
  char local_39;
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  iVar1 = *(int *)&param_1->method;
  uVar8 = 0;
  if (iVar1 < 0) goto LAB_010bd0df;
  if (unaff_ESI == 1) {
    if (4 < iVar1) goto LAB_010bd0df;
    if (iVar1 < 1) {
      iVar1 = 0;
    }
    else {
      ___memcpy_chk(0x10);
      uVar2 = (uint64_t)param_1->cb_arg & 7;
      if (uVar2 == 0) {
        iVar1 = *(int *)&param_1->method;
      }
      else {
        bVar5 = (byte)(0xff >> (8U - (char)uVar2 & 0x1f));
        if (param_2 == '\0') {
          iVar1 = *(int *)&param_1->method;
          (&stack0xffffffffffffffb7)[iVar1] = (&stack0xffffffffffffffb7)[iVar1] & ~bVar5;
        }
        else {
          iVar1 = *(int *)&param_1->method;
          (&stack0xffffffffffffffb7)[iVar1] = (&stack0xffffffffffffffb7)[iVar1] | bVar5;
        }
      }
    }
    _memset((void *)(uint64_t)(4U - iVar1),4U - iVar1,param_3);
    _BIO_printf((BIO *)(uint64_t)local_47,(char *)(uint64_t)local_48,(uint64_t)local_46,
                (uint64_t)local_45);
  }
  else if (unaff_ESI == 2) {
    if (0x10 < iVar1) goto LAB_010bd0df;
    if (iVar1 < 1) {
      iVar1 = 0;
    }
    else {
      ___memcpy_chk(0x10);
      uVar2 = (uint64_t)param_1->cb_arg & 7;
      if (uVar2 == 0) {
        iVar1 = *(int *)&param_1->method;
      }
      else {
        bVar5 = (byte)(0xff >> (8U - (char)uVar2 & 0x1f));
        if (param_2 == '\0') {
          iVar1 = *(int *)&param_1->method;
          (&stack0xffffffffffffffb7)[iVar1] = (&stack0xffffffffffffffb7)[iVar1] & ~bVar5;
        }
        else {
          iVar1 = *(int *)&param_1->method;
          (&stack0xffffffffffffffb7)[iVar1] = (&stack0xffffffffffffffb7)[iVar1] | bVar5;
        }
      }
    }
    uVar3 = 0x10 - iVar1;
    pcVar4 = (char *)(uint64_t)uVar3;
    format = (char *)(int64_t)(int)uVar3;
    _memset(pcVar4,uVar3,param_3);
    uVar2 = 0x10;
    if (((((local_39 == '\0') && (local_3a == '\0')) && (uVar2 = 0xe, local_3b == '\0')) &&
        (((local_3c == '\0' && (uVar2 = 0xc, local_3d == '\0')) &&
         ((local_3e == '\0' && ((uVar2 = 10, local_3f == '\0' && (local_40 == '\0')))))))) &&
       ((uVar2 = 8, local_41 == '\0' &&
        (((((local_42 == '\0' && (uVar2 = 6, local_43 == '\0')) && (local_44 == '\0')) &&
          ((uVar2 = 4, local_45 == 0 && (local_46 == 0)))) &&
         (uVar2 = 2, local_47 == 0 && local_48 == 0)))))) {
      _BIO_puts((BIO *)pcVar4,format);
    }
    else {
      uVar7 = 0;
      do {
        format = (char *)(uint64_t)
                         (((uint)*(ushort *)(&local_48 + uVar7) << 0x10) >> 0x18 |
                         ((uint)*(ushort *)(&local_48 + uVar7) << 0x10 & 0xff0000) >> 8);
        pcVar4 = "";
        if (uVar7 < 0xe) {
          pcVar4 = ":";
        }
        _BIO_printf((BIO *)pcVar4,format);
        uVar7 = uVar7 + 2;
      } while (uVar7 < uVar2);
      uVar8 = 1;
      if (0xf < (uint)uVar7) goto LAB_010bd0df;
      _BIO_puts((BIO *)pcVar4,format);
      if ((uint)uVar7 != 0) goto LAB_010bd0df;
    }
    _BIO_puts((BIO *)pcVar4,format);
  }
  else {
    bio = param_1;
    if (0 < iVar1) {
      lVar6 = 0;
      do {
        pcVar4 = ":";
        if (lVar6 == 0) {
          pcVar4 = "";
        }
        bio = (BIO *)(uint64_t)(byte)param_1->callback[lVar6];
        _BIO_printf(bio,pcVar4);
        lVar6 = lVar6 + 1;
      } while (lVar6 < *(int *)&param_1->method);
    }
    _BIO_printf(bio,(char *)(uint64_t)(*(uint *)&param_1->cb_arg & 7));
  }
  uVar8 = 1;
LAB_010bd0df:
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 == local_38) {
    return uVar8;
  }
                      ___stack_chk_fail();
}

