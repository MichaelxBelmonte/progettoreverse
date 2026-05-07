// Function: FUN_01d8b780
// Address: 01d8b780
// Size: 1557 bytes
// Class: GNString
// String references:
//   "subtype"
//   "sendEvent:"
//   "type"


/* WARNING: Removing unreachable block (ram,0x01d8bc0f) */
/* WARNING: Removing unreachable block (ram,0x01d8b89e) */
/* WARNING: Removing unreachable block (ram,0x01d8b8aa) */
/* WARNING: Removing unreachable block (ram,0x01d8bb5b) */
/* WARNING: Removing unreachable block (ram,0x01d8bb67) */
/* WARNING: Removing unreachable block (ram,0x01d8bc1b) */
/* WARNING: Removing unreachable block (ram,0x01d8bcd2) */
/* WARNING: Removing unreachable block (ram,0x01d8bcde) */
/* WARNING: Removing unreachable block (ram,0x01d8bc8b) */
/* WARNING: Removing unreachable block (ram,0x01d8bc97) */
/* WARNING: Removing unreachable block (ram,0x01d8bd4b) */
/* WARNING: Removing unreachable block (ram,0x01d8bd57) */

undefined8 * FUN_01d8b780(double param_1,undefined1 *param_2)

{
  bool bVar1;
  bool bVar2;
  code *pcVar3;
  undefined *puVar4;
  longlong *plVar5;
  short sVar6;
  undefined8 uVar7;
  longlong lVar8;
  longlong lVar9;
  longlong *plVar10;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  undefined8 extraout_XMM0_Qa;
  undefined8 extraout_XMM0_Qa_00;
  undefined8 extraout_XMM0_Qa_01;
  undefined8 extraout_XMM0_Qa_02;
  longlong *local_80;
  char local_78;
  longlong *local_70;
  char local_68;
  longlong *local_60;
  char local_58;
  double local_50;
  undefined4 local_44;
  longlong *local_40;
  char local_38;
  
  local_50 = param_1;
  uVar7 = FUN_01d3a560();
  if (local_38 == '\0') {
    if (local_40 != (longlong *)0x0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01d8b7dd;
    }
  }
  else if (local_40 != (longlong *)0x0) {
LAB_01d8b7dd:
    FUN_01d3a630();
    FUN_01e466c0();
    (**(code **)(*unaff_RSI + 0x6a0))();
    local_60 = local_40;
    local_58 = 0;
    if (local_38 == '\0') {
      if (local_40 != (longlong *)0x0) {
        FUN_00d50b00();
      }
    }
    else {
      local_38 = '\0';
    }
    local_58 = '\x01';
    (**(code **)(*unaff_RSI + 0x920))();
    if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
    FUN_01d3a930();
    FUN_00d50b20();
    local_44 = 0;
    goto joined_r0x01d8b81e;
  }
  local_44 = (undefined4)CONCAT71((int7)((ulonglong)uVar7 >> 8),1);
joined_r0x01d8b81e:
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = 0;
  }
  _objc_alloc();
  (*(code *)PTR__objc_msgSend_024a9998)();
  if ((local_50 != DAT_023b19a0) || (NAN(local_50) || NAN(DAT_023b19a0))) {
    local_50 = (double)(*(code *)PTR__objc_msgSend_024a9998)();
  }
  else {
    local_50 = (double)(*(code *)PTR__objc_msgSend_024a9998)();
  }
  lVar8 = (*(code *)PTR__objc_msgSend_024a9998)
                    (local_50,0x4e443cfe,*(undefined8 *)PTR__NSEventTrackingRunLoopMode_0249c130,1);
  if (lVar8 != 0) {
    bVar2 = false;
    uVar7 = extraout_XMM0_Qa;
    do {
      FUN_01f1c940(uVar7,*(undefined8 *)unaff_RSI[0x38]);
      plVar10 = local_40;
      pcVar3 = DAT_028b8690;
      if (local_40 == (longlong *)0x0) {
        plVar10 = (longlong *)0x0;
      }
      else {
        bVar2 = true;
        if (((local_38 == '\0') && (FUN_00d50b00(), pcVar3 = DAT_028b8690, local_38 != '\0')) &&
           (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
          pcVar3 = DAT_028b8690;
        }
      }
      DAT_028b8690 = pcVar3;
      if (pcVar3 != (code *)0x0) {
        local_78 = 0;
        uVar7 = FUN_00d50b00();
        local_78 = '\x01';
        local_80 = unaff_RSI;
        (*pcVar3)(uVar7,&local_80);
        plVar5 = local_40;
        if (local_40 == plVar10) {
          plVar5 = plVar10;
          bVar1 = bVar2;
          if ((bVar2) || (plVar10 == (longlong *)0x0)) goto LAB_01d8bb2a;
          if (local_38 != '\0') goto LAB_01d8baf7;
          bVar1 = true;
          FUN_00d50b00();
          if (local_38 == '\0') goto LAB_01d8bb3e;
LAB_01d8bb30:
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b20();
          }
        }
        else if (local_38 == '\0') {
          if (local_40 != (longlong *)0x0) {
            FUN_00d50b00();
          }
          bVar1 = true;
          if ((bVar2) && (plVar10 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
LAB_01d8bb2a:
          plVar10 = plVar5;
          if (local_38 != '\0') goto LAB_01d8bb30;
        }
        else {
          if ((bVar2) && (plVar10 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
LAB_01d8baf7:
          plVar10 = plVar5;
          local_38 = '\0';
          bVar1 = true;
        }
LAB_01d8bb3e:
        bVar2 = bVar1;
        if ((local_78 != '\0') && (local_80 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      puVar4 = PTR__objc_msgSend_024a9998;
      if (plVar10 != (longlong *)0x0) {
LAB_01d8bc5d:
        FUN_01d3a5b0();
        (*(code *)PTR__objc_release_024a99a0)();
        if ((char)local_44 == '\0') {
          FUN_01d3a910();
        }
        FUN_01f7ebb0();
        plVar5 = local_40;
        local_68 = 0;
        FUN_00d50b00();
        local_68 = '\x01';
        local_70 = unaff_RSI;
        (**(code **)(*plVar5 + 0x378))(1,&local_70);
        if ((local_68 != '\0') && (local_70 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_38 != '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        *(undefined1 *)(unaff_RDI + 1) = 0;
        if ((!bVar2) && (plVar10 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        *unaff_RDI = plVar10;
        *(undefined1 *)(unaff_RDI + 1) = 1;
        return unaff_RDI;
      }
      lVar9 = (*(code *)PTR__objc_msgSend_024a9998)();
      uVar7 = extraout_XMM0_Qa_01;
      if ((lVar9 == 0xd) && (sVar6 = (*(code *)puVar4)(), uVar7 = extraout_XMM0_Qa_02, sVar6 == 2))
      {
        (*(code *)PTR__objc_msgSend_024a9998)(1,lVar8);
        goto LAB_01d8bc5d;
      }
      (*(code *)puVar4)(uVar7,lVar8);
      lVar8 = (*(code *)puVar4)(local_50,0x4e443cfe,
                                *(undefined8 *)PTR__NSEventTrackingRunLoopMode_0249c130,1);
      uVar7 = extraout_XMM0_Qa_00;
    } while (lVar8 != 0);
  }
  if (param_2 != (undefined1 *)0x0) {
    *param_2 = 1;
  }
  if ((char)local_44 == '\0') {
    FUN_01d3a910();
  }
  (*(code *)PTR__objc_release_024a99a0)();
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
  return unaff_RDI;
}


