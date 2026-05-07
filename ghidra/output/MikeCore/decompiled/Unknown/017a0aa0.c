// Function: FUN_017a0aa0
// Address: 017a0aa0
// Size: 978 bytes
// Class: Unknown
// String references:
//   "%@ +%I"
//   "%@ -%I"


/* WARNING: Removing unreachable block (ram,0x017a0d48) */
/* WARNING: Removing unreachable block (ram,0x017a0d51) */
/* WARNING: Removing unreachable block (ram,0x017a0c40) */
/* WARNING: Removing unreachable block (ram,0x017a0c4d) */
/* WARNING: Removing unreachable block (ram,0x017a0df9) */
/* WARNING: Removing unreachable block (ram,0x017a0e02) */

void FUN_017a0aa0(undefined8 param_1,undefined1 *param_2)

{
  ulonglong uVar1;
  longlong lVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int unaff_ESI;
  uint uVar7;
  longlong *unaff_RDI;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  
  FUN_0179b9c0();
  if ((local_50 == '\0') && (local_58 != 0)) {
    FUN_00d50b00();
  }
  uVar6 = *(uint *)(local_58 + 0xc);
  if ((int)uVar6 < 1) {
    *param_2 = 0;
  }
  else {
    lVar2 = *(longlong *)(local_58 + 0x10);
    if (uVar6 == 1) {
      uVar8 = 100000;
      iVar3 = -1;
      uVar1 = 0;
    }
    else {
      uVar8 = 100000;
      iVar3 = -1;
      uVar1 = 0;
      do {
        uVar7 = unaff_ESI - *(int *)(*(longlong *)(lVar2 + uVar1 * 8) + 0x18);
        uVar9 = -uVar7;
        if (0 < (int)uVar7) {
          uVar9 = uVar7;
        }
        uVar5 = -uVar8;
        if (0 < (int)uVar8) {
          uVar5 = uVar8;
        }
        iVar4 = iVar3;
        if (uVar9 <= uVar5) {
          iVar4 = (int)uVar1;
          uVar8 = uVar7;
        }
        uVar7 = unaff_ESI - *(int *)(*(longlong *)(lVar2 + 8 + uVar1 * 8) + 0x18);
        uVar9 = -uVar7;
        if (0 < (int)uVar7) {
          uVar9 = uVar7;
        }
        uVar5 = -uVar8;
        if (0 < (int)uVar8) {
          uVar5 = uVar8;
        }
        iVar3 = (int)uVar1 + 1;
        if (uVar5 < uVar9) {
          iVar3 = iVar4;
          uVar7 = uVar8;
        }
        uVar8 = uVar7;
        uVar1 = uVar1 + 2;
      } while ((uVar6 & 0xfffffffe) != uVar1);
    }
    if ((uVar6 & 1) != 0) {
      uVar9 = unaff_ESI - *(int *)(*(longlong *)(lVar2 + uVar1 * 8) + 0x18);
      uVar6 = -uVar9;
      if (0 < (int)uVar9) {
        uVar6 = uVar9;
      }
      uVar7 = -uVar8;
      if (0 < (int)uVar8) {
        uVar7 = uVar8;
      }
      if (uVar6 <= uVar7) {
        iVar3 = (int)uVar1;
        uVar8 = uVar9;
      }
    }
    *param_2 = 0;
    uVar6 = -uVar8;
    if (0 < (int)uVar8) {
      uVar6 = uVar8;
    }
    if ((iVar3 != -1) && (uVar6 < 3)) {
      lVar2 = (longlong)iVar3;
      if (uVar8 == 0) {
        local_68 = *(longlong *)(*(longlong *)(*(longlong *)(local_58 + 0x10) + lVar2 * 8) + 0x10);
        bVar10 = local_68 != 0;
        if (bVar10) {
          FUN_00d50b00();
        }
        *param_2 = 1;
      }
      else if ((int)uVar8 < 1) {
        lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(local_58 + 0x10) + lVar2 * 8) + 0x10);
        if (lVar2 != 0) {
          FUN_00d50b00();
          FUN_00d50b00();
        }
        FUN_00d8cb40();
        if (local_68 == 0) {
          bVar10 = false;
        }
        else if (local_60 == '\0') {
          FUN_00d50b00();
          bVar10 = true;
        }
        else {
          bVar10 = true;
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
          FUN_00d50b20();
        }
      }
      else {
        lVar2 = *(longlong *)(*(longlong *)(*(longlong *)(local_58 + 0x10) + lVar2 * 8) + 0x10);
        if (lVar2 != 0) {
          FUN_00d50b00();
          FUN_00d50b00();
        }
        FUN_00d8cb40();
        if (local_68 == 0) {
          bVar10 = false;
        }
        else if (local_60 == '\0') {
          FUN_00d50b00();
          bVar10 = true;
        }
        else {
          bVar10 = true;
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
          FUN_00d50b20();
        }
      }
      goto LAB_017a0e33;
    }
  }
  FUN_00d8ede0();
  local_68 = local_58;
  if (local_58 == 0) {
    bVar10 = false;
  }
  else {
    bVar10 = true;
    if (local_50 == '\0') {
      FUN_00d50b00();
    }
  }
LAB_017a0e33:
  *(undefined1 *)(unaff_RDI + 1) = 0;
  if ((!bVar10) && (local_68 != 0)) {
    FUN_00d50b00();
  }
  *unaff_RDI = local_68;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (local_58 != 0) {
    FUN_00d50b20();
  }
  return;
}


