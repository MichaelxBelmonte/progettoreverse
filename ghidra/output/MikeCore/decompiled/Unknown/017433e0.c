// Function: FUN_017433e0
// Address: 017433e0
// Size: 626 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x01743625) */
/* WARNING: Removing unreachable block (ram,0x0174362e) */

undefined8 FUN_017433e0(longlong *param_1,undefined8 param_2,undefined4 param_3,int param_4)

{
  char cVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  longlong lVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  short sVar9;
  int unaff_ESI;
  undefined8 unaff_RDI;
  longlong local_68;
  char local_60;
  undefined4 local_54;
  longlong *local_50;
  longlong local_48;
  char local_40;
  char local_31;
  
  if (*param_1 == 0) {
    local_54 = param_3;
    FUN_0177f010();
    lVar5 = local_48;
    lVar2 = *param_1;
    if (lVar2 == local_48) {
      if (((char)param_1[1] != '\0') || (local_48 == 0)) goto LAB_017434a9;
      local_50 = param_1 + 1;
      if (local_40 == '\0') {
        FUN_00d50b00();
        goto LAB_017434a2;
      }
    }
    else {
      local_50 = param_1 + 1;
      cVar1 = (char)param_1[1];
      if (local_40 == '\0') {
        local_31 = cVar1;
        if (local_48 != 0) {
          FUN_00d50b00();
        }
        *param_1 = lVar5;
        if ((local_31 != '\0') && (lVar2 != 0)) {
          FUN_00d50b20();
        }
LAB_017434a2:
        *(undefined1 *)local_50 = 1;
LAB_017434a9:
        param_3 = local_54;
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
          param_3 = local_54;
        }
        goto LAB_017434c4;
      }
      *param_1 = local_48;
      if ((cVar1 != '\0') && (lVar2 != 0)) {
        FUN_00d50b20();
      }
    }
    *(undefined1 *)local_50 = 1;
    param_3 = local_54;
  }
LAB_017434c4:
  iVar4 = unaff_ESI >> 0x1f;
  iVar3 = unaff_ESI / 0xc + iVar4;
  iVar6 = unaff_ESI + (iVar3 - iVar4) * -0xc;
  iVar6 = (iVar6 >> 0x1f & 0xcU) + iVar6;
  iVar7 = 0;
  iVar8 = 0;
  if ((char)param_3 != '\0') {
    if (((param_4 == 1) && (iVar7 = 6, iVar6 == 6)) || ((param_4 == 2 && (iVar7 = 7, iVar6 == 1))))
    goto LAB_017435a5;
    param_4 = param_4 + -3;
    iVar7 = -(uint)(param_4 == 0);
  }
  if (iVar7 < param_4) {
    iVar8 = -1;
    if (5 < param_4) {
      iVar8 = param_4 + -6;
    }
  }
  else {
    iVar8 = -6;
    if (param_4 < -5) {
      iVar8 = param_4 + -1;
    }
  }
  sVar9 = (short)((short)iVar6 * 7) % 0xc;
  iVar6 = sVar9 + 0xc;
  if (-1 < sVar9) {
    iVar6 = (int)sVar9;
  }
  iVar6 = iVar6 - iVar8;
  iVar6 = iVar6 + (((uint)(iVar6 / 6 + (iVar6 >> 0x1f)) >> 1) - (iVar6 >> 0x1f)) * -0xc;
  iVar7 = iVar6 + iVar8 + (iVar6 >> 0x1f & 0xcU);
LAB_017435a5:
  FUN_01780260(iVar8,iVar7);
  lVar2 = local_48;
  if ((((local_40 == '\0') && (local_48 != 0)) && (FUN_00d50b00(), local_40 != '\0')) &&
     (local_48 != 0)) {
    FUN_00d50b20();
  }
  local_68 = lVar2;
  local_60 = '\0';
  FUN_01521770((iVar3 - iVar4) + -1,&local_68);
  if ((local_60 != '\0') && (local_68 != 0)) {
    FUN_00d50b20();
  }
  if (lVar2 != 0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


