// Function: FUN_01e13700
// Address: 01e13700
// Size: 1688 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x01e13cde) */
/* WARNING: Removing unreachable block (ram,0x01e13ceb) */
/* WARNING: Removing unreachable block (ram,0x01e13c78) */
/* WARNING: Removing unreachable block (ram,0x01e13a47) */
/* WARNING: Removing unreachable block (ram,0x01e13c49) */
/* WARNING: Removing unreachable block (ram,0x01e13a73) */
/* WARNING: Removing unreachable block (ram,0x01e13d24) */
/* WARNING: Removing unreachable block (ram,0x01e13a36) */
/* WARNING: Removing unreachable block (ram,0x01e13cfa) */
/* WARNING: Removing unreachable block (ram,0x01e13d3b) */
/* WARNING: Removing unreachable block (ram,0x01e13c4e) */
/* WARNING: Removing unreachable block (ram,0x01e13c56) */
/* WARNING: Removing unreachable block (ram,0x01e13c64) */
/* WARNING: Removing unreachable block (ram,0x01e13c80) */
/* WARNING: Removing unreachable block (ram,0x01e13c86) */
/* WARNING: Removing unreachable block (ram,0x01e13c8f) */
/* WARNING: Removing unreachable block (ram,0x01e13c94) */
/* WARNING: Removing unreachable block (ram,0x01e13c9e) */
/* WARNING: Removing unreachable block (ram,0x01e13cab) */

ulonglong FUN_01e13700(undefined8 param_1,byte param_2)

{
  longlong lVar1;
  char cVar2;
  uint uVar3;
  longlong *unaff_RDI;
  undefined7 uVar5;
  ulonglong uVar4;
  bool bVar6;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  FUN_01cae990();
  lVar1 = DAT_027f32e8;
  if (DAT_027f32e8 != 0) {
    FUN_00d50b00();
  }
  cVar2 = (**(code **)(*local_40 + 0x50))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  uVar5 = (undefined7)((ulonglong)local_40 >> 8);
  if (cVar2 != '\0') {
    uVar4 = CONCAT71(uVar5,1);
    if (param_2 != 0) {
      FUN_01caeae0();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (local_40 == (longlong *)0x0) {
        FUN_01caeb00();
        FUN_00d8ede0();
        FUN_01e125e0();
      }
      else {
        FUN_01caeae0();
        (**(code **)(*local_50 + 400))();
        if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_38 = '\0';
        }
        FUN_01e125e0();
        if (local_40 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
    }
    goto LAB_01e13d83;
  }
  FUN_01cae990();
  lVar1 = DAT_027e7ca0;
  if (DAT_027e7ca0 != 0) {
    FUN_00d50b00();
  }
  cVar2 = (**(code **)(*local_40 + 0x50))();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 == '\0') {
    FUN_01cae990();
    lVar1 = DAT_02725a10;
    if (DAT_02725a10 != 0) {
      FUN_00d50b00();
    }
    cVar2 = (**(code **)(*local_40 + 0x50))();
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if (cVar2 == '\0') {
      FUN_01cae990();
      lVar1 = DAT_027f2a20;
      if (DAT_027f2a20 != 0) {
        FUN_00d50b00();
      }
      cVar2 = (**(code **)(*local_40 + 0x50))();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (cVar2 == '\0') {
        FUN_01cae990();
        lVar1 = DAT_026de8c8;
        if (DAT_026de8c8 != 0) {
          FUN_00d50b00();
        }
        cVar2 = (**(code **)(*local_40 + 0x50))();
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (cVar2 == '\0') {
          FUN_01cae990();
          lVar1 = DAT_026de900;
          if (DAT_026de900 != 0) {
            FUN_00d50b00();
          }
          cVar2 = (**(code **)(*local_40 + 0x50))();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
          if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          if (cVar2 == '\0') {
            uVar3 = FUN_01e47f50(param_1,param_2);
            uVar4 = (ulonglong)uVar3;
            goto LAB_01e13d83;
          }
          if (*(char *)((longlong)unaff_RDI + 0x161) == '\0') {
            FUN_01f27fe0();
            uVar3 = (**(code **)(*local_40 + 0x6c0))();
            uVar4 = (ulonglong)uVar3;
            if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            param_2 = (byte)uVar3 & param_2;
          }
          else {
            uVar4 = CONCAT71(uVar5,1);
          }
          if (param_2 == 0) goto LAB_01e13d83;
          (**(code **)(*unaff_RDI + 0x938))();
        }
        else {
          bVar6 = (char)unaff_RDI[0x2a] == '\0';
          uVar4 = CONCAT71(uVar5,!bVar6);
          if ((bVar6) || (param_2 == 0)) goto LAB_01e13d83;
          (**(code **)(*unaff_RDI + 0x928))();
        }
      }
      else {
        uVar4 = CONCAT71(uVar5,0 < (int)unaff_RDI[0x2d]);
        if (((int)unaff_RDI[0x2d] < 1) || (param_2 == 0)) goto LAB_01e13d83;
        (**(code **)(*unaff_RDI + 0x918))();
      }
    }
    else {
      if ((char)unaff_RDI[0x2a] == '\0') goto LAB_01e13970;
      uVar4 = CONCAT71(uVar5,0 < (int)unaff_RDI[0x2d]);
      if (((int)unaff_RDI[0x2d] < 1) || (param_2 == 0)) goto LAB_01e13d83;
      (**(code **)(*unaff_RDI + 0x930))();
    }
  }
  else {
    if ((char)unaff_RDI[0x2a] == '\0') {
LAB_01e13970:
      uVar4 = 0;
      goto LAB_01e13d83;
    }
    uVar4 = CONCAT71(uVar5,0 < (int)unaff_RDI[0x2d]);
    if (((int)unaff_RDI[0x2d] < 1) || (param_2 == 0)) goto LAB_01e13d83;
    (**(code **)(*unaff_RDI + 0x920))();
  }
  uVar4 = CONCAT71((int7)(uVar4 >> 8),1);
LAB_01e13d83:
  return uVar4 & 0xffffffff;
}


