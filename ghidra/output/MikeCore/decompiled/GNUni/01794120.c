// Function: FUN_01794120
// Address: 01794120
// Size: 651 bytes
// Class: GNUni


undefined8 FUN_01794120(longlong *param_1,undefined4 param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  char cVar4;
  int iVar5;
  ulonglong uVar6;
  undefined8 *unaff_RSI;
  longlong *unaff_RDI;
  bool bVar7;
  bool bVar8;
  undefined8 local_68;
  undefined1 local_60;
  longlong local_58;
  char local_50;
  longlong *local_48;
  longlong local_40;
  char local_38;
  
  if (*param_1 == 0) {
    local_40 = *unaff_RDI;
    local_38 = '\0';
    local_68 = *unaff_RSI;
    local_60 = 0;
    FUN_017921e0(param_2,&local_68,0);
    lVar1 = *param_1;
    if (lVar1 == local_58) {
      if (((char)param_1[1] == '\0') && (local_58 != 0)) {
        local_48 = param_1 + 1;
        if (local_50 == '\0') {
          FUN_00d50b00();
        }
        goto LAB_017941f2;
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_48 = param_1 + 1;
      lVar2 = param_1[1];
      if (local_50 == '\0') {
        if (local_58 != 0) {
          FUN_00d50b00();
        }
        *param_1 = local_58;
        if (((char)lVar2 != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        *param_1 = local_58;
        if (((char)lVar2 != '\0') && (lVar1 != 0)) {
          FUN_00d50b20();
        }
      }
LAB_017941f2:
      *(undefined1 *)local_48 = 1;
    }
    if ((local_38 != '\0') && (local_40 != 0)) {
      FUN_00d50b20();
    }
  }
  iVar5 = FUN_01717260();
  if ((iVar5 != 7) && (iVar5 != -1)) {
    return 0xffffffff;
  }
  cVar3 = FUN_01716be0();
  cVar4 = FUN_01716c00();
  if (((cVar3 == '\0') && (cVar4 == '\0')) && (*param_1 != 0)) {
    FUN_01715480();
    cVar4 = FUN_01716980();
    if (cVar4 == '\0') {
      FUN_01715480();
      cVar4 = FUN_01716980();
      goto joined_r0x01794393;
    }
    cVar4 = '\0';
  }
  else if (cVar3 == '\0') goto joined_r0x01794393;
  uVar6 = ~*(ulonglong *)(*unaff_RDI + 0x18);
  bVar7 = (uVar6 & 0xf00000000000) != 0;
  bVar8 = (uVar6 & 0xf0000000000) != 0;
  if ((uVar6 & 0xff0000000000) == 0) {
    if (*param_1 == 0) goto joined_r0x01794393;
    FUN_01715480();
    cVar3 = FUN_01716980();
    if (cVar3 == '\0') {
      FUN_01715480();
      FUN_01716980();
      goto joined_r0x01794393;
    }
    bVar7 = true;
    bVar8 = false;
  }
  if ((!bVar8) && (bVar7)) {
    if (*param_1 == 0) {
      return 6;
    }
    FUN_01715480();
    cVar3 = FUN_01716980();
    if (cVar3 != '\0') {
      return 6;
    }
  }
joined_r0x01794393:
  if (cVar4 != '\0') {
    if (*param_1 == 0) {
      return 1;
    }
    FUN_01715480();
    cVar4 = FUN_01716980();
    if (cVar4 != '\0') {
      return 1;
    }
  }
  return 0xffffffff;
}


