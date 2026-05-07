// Function: FUN_00d381d0
// Address: 00d381d0
// Size: 2320 bytes
// Class: GNList


/* WARNING: Removing unreachable block (ram,0x00d38210) */
/* WARNING: Removing unreachable block (ram,0x00d3821c) */
/* WARNING: Removing unreachable block (ram,0x00d3857d) */
/* WARNING: Removing unreachable block (ram,0x00d3858a) */
/* WARNING: Removing unreachable block (ram,0x00d3861f) */
/* WARNING: Removing unreachable block (ram,0x00d3862c) */
/* WARNING: Removing unreachable block (ram,0x00d386c8) */
/* WARNING: Removing unreachable block (ram,0x00d386d5) */
/* WARNING: Removing unreachable block (ram,0x00d3876a) */
/* WARNING: Removing unreachable block (ram,0x00d38777) */
/* WARNING: Removing unreachable block (ram,0x00d3880e) */
/* WARNING: Removing unreachable block (ram,0x00d3881b) */
/* WARNING: Removing unreachable block (ram,0x00d388a2) */
/* WARNING: Removing unreachable block (ram,0x00d388ab) */
/* WARNING: Removing unreachable block (ram,0x00d388e0) */
/* WARNING: Removing unreachable block (ram,0x00d388e9) */
/* WARNING: Removing unreachable block (ram,0x00d38404) */
/* WARNING: Removing unreachable block (ram,0x00d3840d) */
/* WARNING: Removing unreachable block (ram,0x00d384d4) */
/* WARNING: Removing unreachable block (ram,0x00d384e1) */
/* WARNING: Removing unreachable block (ram,0x00d3885e) */
/* WARNING: Removing unreachable block (ram,0x00d3886b) */
/* WARNING: Removing unreachable block (ram,0x00d387bc) */
/* WARNING: Removing unreachable block (ram,0x00d387c9) */
/* WARNING: Removing unreachable block (ram,0x00d38719) */
/* WARNING: Removing unreachable block (ram,0x00d38726) */
/* WARNING: Removing unreachable block (ram,0x00d38678) */
/* WARNING: Removing unreachable block (ram,0x00d38685) */
/* WARNING: Removing unreachable block (ram,0x00d385cd) */
/* WARNING: Removing unreachable block (ram,0x00d385da) */
/* WARNING: Removing unreachable block (ram,0x00d38524) */
/* WARNING: Removing unreachable block (ram,0x00d38531) */

void FUN_00d381d0(void)

{
  int iVar1;
  longlong *plVar2;
  longlong lVar3;
  uint uVar4;
  bool bVar5;
  char cVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  ulonglong uVar9;
  undefined8 *unaff_RSI;
  longlong unaff_RDI;
  longlong lVar10;
  longlong lVar11;
  undefined8 extraout_XMM0_Qa;
  undefined8 uVar12;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  longlong local_e0;
  char local_d8;
  longlong local_d0;
  char local_c8;
  longlong local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong local_80;
  char local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong local_40;
  char local_38;
  
  FUN_00d50de0();
  cVar6 = (**(code **)(*(longlong *)*unaff_RSI + 0x378))();
  if (cVar6 == '\0') {
    plVar2 = (longlong *)*unaff_RSI;
    uVar8 = 0;
    uVar7 = 0;
    uVar12 = extraout_XMM0_Qa;
    if (*(longlong *)(unaff_RDI + 0x10) != 0) {
      uVar7 = FUN_00e7dde0(extraout_XMM0_Qa,0);
      uVar12 = extraout_XMM0_Qa_00;
    }
    uVar12 = (**(code **)(*plVar2 + 0x410))(uVar12,uVar7);
    plVar2 = (longlong *)*unaff_RSI;
    if (*(longlong *)(unaff_RDI + 0x18) != 0) {
      uVar8 = FUN_00e7dde0();
      uVar12 = extraout_XMM0_Qa_01;
    }
    (**(code **)(*plVar2 + 0x410))(uVar12,uVar8);
    plVar2 = (longlong *)*unaff_RSI;
    local_80 = *(longlong *)(unaff_RDI + 0x20);
    if (local_80 != 0) {
      FUN_00d50b00();
    }
    local_78 = '\x01';
    (**(code **)(*plVar2 + 0x400))();
    if ((local_78 != '\0') && (local_80 != 0)) {
      FUN_00d50b20();
    }
    plVar2 = (longlong *)*unaff_RSI;
    lVar11 = *(longlong *)(unaff_RDI + 0x28);
    if (lVar11 != 0) {
      FUN_00d50b00();
    }
    local_68 = '\x01';
    local_70 = lVar11;
    (**(code **)(*plVar2 + 0x400))();
    if ((local_68 != '\0') && (local_70 != 0)) {
      FUN_00d50b20();
    }
  }
  else {
    if (*(longlong *)(unaff_RDI + 0x10) != 0) {
      plVar2 = (longlong *)*unaff_RSI;
      uVar7 = FUN_00e7dde0();
      local_e0 = DAT_0277d7b8;
      if (DAT_0277d7b8 != 0) {
        FUN_00d50b00();
      }
      local_d8 = '\x01';
      (**(code **)(*plVar2 + 0x500))(&local_e0,uVar7);
      if ((local_d8 != '\0') && (local_e0 != 0)) {
        FUN_00d50b20();
      }
    }
    if (*(longlong *)(unaff_RDI + 0x18) != 0) {
      plVar2 = (longlong *)*unaff_RSI;
      uVar7 = FUN_00e7dde0();
      local_d0 = DAT_0277d7c8;
      if (DAT_0277d7c8 != 0) {
        FUN_00d50b00();
      }
      local_c8 = '\x01';
      (**(code **)(*plVar2 + 0x500))(&local_d0,uVar7);
      if ((local_c8 != '\0') && (local_d0 != 0)) {
        FUN_00d50b20();
      }
    }
    lVar11 = *(longlong *)(unaff_RDI + 0x20);
    if (lVar11 != 0) {
      plVar2 = (longlong *)*unaff_RSI;
      local_58 = 0;
      uVar12 = FUN_00d50b00();
      local_c0 = DAT_0277d7c0;
      local_58 = '\x01';
      local_60 = lVar11;
      if (DAT_0277d7c0 != 0) {
        uVar12 = FUN_00d50b00();
      }
      local_b8 = '\x01';
      (**(code **)(*plVar2 + 0x4f0))(uVar12,&local_c0);
      if ((local_b8 != '\0') && (local_c0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
    }
    iVar1 = *(int *)(*(longlong *)(unaff_RDI + 0x28) + 0x18);
    uVar4 = iVar1 / 0x18;
    uVar12 = FUN_00d7a7b0();
    if ((local_38 == '\0') && (local_40 != 0)) {
      uVar12 = FUN_00d50b00();
    }
    if (0x2f < iVar1) {
      uVar9 = 2;
      if (2 < (int)uVar4) {
        uVar9 = (ulonglong)uVar4;
      }
      lVar11 = 0x18;
      do {
        lVar3 = *(longlong *)(*(longlong *)(unaff_RDI + 0x28) + 0x10);
        bVar5 = false;
        lVar10 = 0;
        switch(*(undefined1 *)(lVar3 + 0x10 + lVar11)) {
        case 0x40:
          lVar10 = *(longlong *)(lVar3 + lVar11);
          if (lVar10 == 0) {
            lVar10 = 0;
            bVar5 = false;
          }
          else {
            bVar5 = true;
            FUN_00d50b00();
          }
          break;
        case 0x43:
          FUN_00dd6690();
          if (local_40 == 0) {
LAB_00d388f0:
            bVar5 = false;
            lVar10 = 0;
          }
          else {
            bVar5 = true;
            lVar10 = local_40;
            if (local_38 == '\0') {
              FUN_00d50b00();
            }
          }
          break;
        case 0x45:
          FUN_00dd6530(*(undefined8 *)(lVar3 + lVar11),*(undefined8 *)(lVar3 + 8 + lVar11));
          if (local_40 == 0) goto LAB_00d388f0;
          bVar5 = true;
          lVar10 = local_40;
          if (local_38 == '\0') {
            FUN_00d50b00();
          }
          break;
        case 0x49:
          FUN_00d46530();
          if (local_40 == 0) goto LAB_00d388f0;
          bVar5 = true;
          lVar10 = local_40;
          if (local_38 == '\0') {
            FUN_00d50b00();
          }
          break;
        case 0x50:
          FUN_00dd65e0(*(undefined8 *)(lVar3 + lVar11));
          if (local_40 == 0) goto LAB_00d388f0;
          bVar5 = true;
          lVar10 = local_40;
          if (local_38 == '\0') {
            FUN_00d50b00();
          }
          break;
        case 0x52:
          FUN_00dd6480(*(undefined8 *)(lVar3 + lVar11),*(undefined8 *)(lVar3 + 8 + lVar11));
          if (local_40 == 0) goto LAB_00d388f0;
          bVar5 = true;
          lVar10 = local_40;
          if (local_38 == '\0') {
            FUN_00d50b00();
          }
          break;
        case 0x5e:
          FUN_00dd6a00();
          if (local_40 == 0) goto LAB_00d388f0;
          bVar5 = true;
          lVar10 = local_40;
          if (local_38 == '\0') {
            FUN_00d50b00();
          }
          break;
        case 0x62:
          FUN_00d46300();
          if (local_40 == 0) goto LAB_00d388f0;
          bVar5 = true;
          lVar10 = local_40;
          if (local_38 == '\0') {
            FUN_00d50b00();
          }
          break;
        case 99:
          FUN_00dd68a0();
          if (local_40 == 0) goto LAB_00d388f0;
          bVar5 = true;
          lVar10 = local_40;
          if (local_38 == '\0') {
            FUN_00d50b00();
          }
          break;
        case 100:
          FUN_00d470c0(*(undefined8 *)(lVar3 + lVar11));
          if (local_40 == 0) goto LAB_00d388f0;
          bVar5 = true;
          lVar10 = local_40;
          if (local_38 == '\0') {
            FUN_00d50b00();
          }
          break;
        case 0x66:
          FUN_00d46dc0(*(undefined4 *)(lVar3 + lVar11));
          if (local_40 == 0) goto LAB_00d388f0;
          bVar5 = true;
          lVar10 = local_40;
          if (local_38 == '\0') {
            FUN_00d50b00();
          }
          break;
        case 0x69:
          FUN_00d46aa0();
          if (local_40 == 0) goto LAB_00d388f0;
          bVar5 = true;
          lVar10 = local_40;
          if (local_38 == '\0') {
            FUN_00d50b00();
          }
          break;
        case 0x6c:
          FUN_00d468f0();
          if (local_40 == 0) goto LAB_00d388f0;
          bVar5 = true;
          lVar10 = local_40;
          if (local_38 == '\0') {
            FUN_00d50b00();
          }
          break;
        case 0x71:
          FUN_00dd67f0();
          if (local_40 == 0) goto LAB_00d388f0;
          bVar5 = true;
          lVar10 = local_40;
          if (local_38 == '\0') {
            FUN_00d50b00();
          }
          break;
        case 0x73:
          FUN_00d46aa0();
          if (local_40 == 0) goto LAB_00d388f0;
          bVar5 = true;
          lVar10 = local_40;
          if (local_38 == '\0') {
            FUN_00d50b00();
          }
        }
        local_a8 = '\0';
        local_b0 = lVar10;
        uVar12 = FUN_00d21140();
        if ((local_a8 != '\0') && (local_b0 != 0)) {
          uVar12 = FUN_00d50b20();
        }
        if ((bVar5) && (lVar10 != 0)) {
          uVar12 = FUN_00d50b20();
        }
        lVar11 = lVar11 + 0x18;
      } while (uVar9 * 0x18 != lVar11);
    }
    lVar11 = DAT_0277d7d0;
    plVar2 = (longlong *)*unaff_RSI;
    local_a0 = local_40;
    local_98 = '\0';
    if (DAT_0277d7d0 != 0) {
      uVar12 = FUN_00d50b00();
    }
    local_90 = lVar11;
    local_88 = '\x01';
    (**(code **)(*plVar2 + 0x4f0))(uVar12,&local_90);
    if ((local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    if ((local_98 != '\0') && (local_a0 != 0)) {
      FUN_00d50b20();
    }
    if (local_40 != 0) {
      FUN_00d50b20();
    }
  }
  return;
}


