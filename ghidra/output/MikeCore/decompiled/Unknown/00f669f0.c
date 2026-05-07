// Function: FUN_00f669f0
// Address: 00f669f0
// Size: 1262 bytes
// Class: Unknown
// String references:
//   "UTF8"
//   "crypto/asn1/asn1_gen.c"
//   "tag="
//   "ASCII"
//   "HEX"
//   "BITLIST"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_00f669f0(char *param_1,int *param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  char *pcVar6;
  uint unaff_ESI;
  char *unaff_RDI;
  size_t sVar7;
  longlong lVar8;
  int local_54;
  int local_50;
  uint local_4c;
  char *local_48;
  
  if (unaff_RDI == (char *)0x0) {
    return 0xffffffff;
  }
  if (0 < (int)unaff_ESI) {
    uVar2 = 0;
    pcVar1 = unaff_RDI;
    do {
      pcVar6 = pcVar1 + 1;
      if (*pcVar1 == ':') {
        param_1 = (char *)(ulonglong)(~uVar2 + unaff_ESI);
        local_48 = param_1;
        unaff_ESI = uVar2;
        goto joined_r0x00f66b71;
      }
      uVar2 = uVar2 + 1;
      pcVar1 = pcVar6;
    } while (unaff_ESI != uVar2);
  }
  local_48 = (char *)0x0;
  pcVar6 = (char *)0x0;
joined_r0x00f66b71:
  local_4c = unaff_ESI;
  if (unaff_ESI == 0xffffffff) {
    unaff_ESI = _strlen(param_1);
  }
  lVar8 = 0;
LAB_00f66a8d:
  if (unaff_ESI != *(uint *)((longlong)&DAT_02594d18 + lVar8)) goto LAB_00f66a80;
  iVar3 = _strncmp(param_1,(char *)(longlong)(int)unaff_ESI,(size_t)param_3);
  sVar7 = (size_t)param_3;
  if (iVar3 != 0) goto LAB_00f66a80;
  _DAT_028a8df8 = (longlong)&DAT_02594d10 + lVar8;
  uVar2 = *(uint *)((longlong)&DAT_02594d1c + lVar8);
  if (uVar2 != 0xffffffff) {
    iVar3 = (int)param_2;
    if ((uVar2 & 0x10000) == 0) {
      param_2[2] = uVar2;
      *(char **)(param_2 + 4) = pcVar6;
      if (pcVar6 != (char *)0x0) {
        return 0;
      }
      if (unaff_RDI[(int)local_4c] != '\0') {
        _ERR_put_error(0x200850c,0xbd,0x115,param_4,iVar3);
        return 0xffffffff;
      }
      return 0;
    }
    puVar4 = &switchD_00f66b9e::switchdataD_00f66eec;
    switch(uVar2) {
    case 0x10001:
      if (*param_2 != -1) {
        _ERR_put_error(0x200850c,0xb5,0x120,param_4,iVar3);
        return 0xffffffff;
      }
      iVar3 = FUN_00f66f10(param_2 + 1);
      if (iVar3 == 0) {
        return 0xffffffff;
      }
      break;
    case 0x10002:
      iVar3 = FUN_00f66f10(&local_50,&local_54);
      if (iVar3 == 0) {
        return 0xffffffff;
      }
      if (*param_2 != -1) {
        _ERR_put_error(0x200850c,0xb3,0x1d8,param_4,(int)param_2);
        return 0xffffffff;
      }
      lVar8 = (longlong)param_2[0x7e];
      if (lVar8 == 0x14) {
LAB_00f66ce0:
        _ERR_put_error(0x200850c,0xae,0x1dd,param_4,(int)param_2);
        return 0xffffffff;
      }
      param_2[0x7e] = param_2[0x7e] + 1;
      param_2[lVar8 * 6 + 6] = local_54;
      param_2[lVar8 * 6 + 7] = local_50;
      (param_2 + lVar8 * 6 + 8)[0] = 1;
      (param_2 + lVar8 * 6 + 8)[1] = 0;
      break;
    case 0x10004:
      lVar8 = (longlong)param_2[0x7e];
      if (lVar8 == 0x14) goto LAB_00f66ce0;
      iVar3 = *param_2;
      param_2[0x7e] = param_2[0x7e] + 1;
      if (iVar3 == -1) {
        iVar5 = 0;
        iVar3 = 3;
      }
      else {
        iVar5 = param_2[1];
        *param_2 = -1;
        param_2[1] = -1;
      }
      param_2[lVar8 * 6 + 6] = iVar3;
      param_2[lVar8 * 6 + 7] = iVar5;
      (param_2 + lVar8 * 6 + 8)[0] = 0;
      (param_2 + lVar8 * 6 + 8)[1] = 1;
      break;
    case 0x10005:
      lVar8 = (longlong)param_2[0x7e];
      if (lVar8 == 0x14) goto LAB_00f66ce0;
      iVar3 = *param_2;
      param_2[0x7e] = param_2[0x7e] + 1;
      if (iVar3 == -1) {
        iVar5 = 0;
        iVar3 = 4;
      }
      else {
        iVar5 = param_2[1];
        *param_2 = -1;
        param_2[1] = -1;
      }
      param_2[lVar8 * 6 + 6] = iVar3;
      param_2[lVar8 * 6 + 7] = iVar5;
      (param_2 + lVar8 * 6 + 8)[0] = 0;
      (param_2 + lVar8 * 6 + 8)[1] = 0;
      break;
    case 0x10006:
      lVar8 = (longlong)param_2[0x7e];
      if (lVar8 == 0x14) goto LAB_00f66ce0;
      iVar3 = *param_2;
      param_2[0x7e] = param_2[0x7e] + 1;
      if (iVar3 == -1) {
        iVar5 = 0;
        iVar3 = 0x10;
      }
      else {
LAB_00f66db9:
        iVar5 = param_2[1];
        *param_2 = -1;
        param_2[1] = -1;
      }
      goto LAB_00f66ea4;
    case 0x10007:
      lVar8 = (longlong)param_2[0x7e];
      if (lVar8 == 0x14) goto LAB_00f66ce0;
      iVar3 = *param_2;
      param_2[0x7e] = param_2[0x7e] + 1;
      if (iVar3 != -1) goto LAB_00f66db9;
      iVar5 = 0;
      iVar3 = 0x11;
LAB_00f66ea4:
      param_2[lVar8 * 6 + 6] = iVar3;
      param_2[lVar8 * 6 + 7] = iVar5;
      (param_2 + lVar8 * 6 + 8)[0] = 1;
      (param_2 + lVar8 * 6 + 8)[1] = 0;
      break;
    case 0x10008:
      if (pcVar6 == (char *)0x0) {
        _ERR_put_error(0x200850c,0xa0,0x145,param_4,iVar3);
        return 0xffffffff;
      }
      iVar3 = _strncmp((char *)&switchD_00f66b9e::switchdataD_00f66eec,
                       (char *)((longlong)&MACH_HEADER.cputype + 1),sVar7);
      if (iVar3 == 0) {
        param_2[3] = 1;
      }
      else {
        iVar3 = _strncmp((char *)puVar4,(char *)&MACH_HEADER.cputype,sVar7);
        if (iVar3 == 0) {
          param_2[3] = 2;
        }
        else {
          iVar3 = _strncmp((char *)puVar4,(char *)((longlong)&MACH_HEADER.magic + 3),sVar7);
          if (iVar3 == 0) {
            param_2[3] = 3;
          }
          else {
            iVar3 = _strncmp((char *)puVar4,(char *)((longlong)&MACH_HEADER.cputype + 3),sVar7);
            if (iVar3 != 0) {
              _ERR_put_error(0x200850c,0xa0,0x151,param_4,(int)param_2);
              return 0xffffffff;
            }
            param_2[3] = 4;
          }
        }
      }
    }
    return 1;
  }
  goto LAB_00f66b0c;
LAB_00f66a80:
  lVar8 = lVar8 + 0x10;
  if ((int)lVar8 == 0x310) {
LAB_00f66b0c:
    iVar3 = 0x200850c;
    _ERR_put_error(0x200850c,0xc2,0x10a,param_4,(int)param_2);
    _ERR_add_error_data(iVar3,unaff_RDI);
    return 0xffffffff;
  }
  goto LAB_00f66a8d;
}


