// Function: FUN_00d2fe60
// Address: 00d2fe60
// Size: 796 bytes
// Class: GNString


longlong * FUN_00d2fe60(void)

{
  undefined *puVar1;
  char cVar2;
  longlong lVar3;
  longlong *unaff_RDI;
  longlong lVar4;
  longlong lVar5;
  bool bVar6;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar7;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined4 extraout_XMM0_Da_02;
  undefined4 extraout_XMM0_Da_03;
  undefined4 extraout_XMM0_Da_04;
  undefined4 extraout_XMM0_Da_05;
  undefined4 extraout_XMM0_Da_06;
  undefined4 extraout_XMM0_Da_07;
  undefined8 local_118;
  undefined8 uStack_110;
  longlong *local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  longlong local_d8;
  undefined1 local_b8 [128];
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  _objc_alloc();
  puVar1 = PTR__objc_msgSend_024a9998;
  (*(code *)PTR__objc_msgSend_024a9998)();
  (*(code *)puVar1)();
  local_118 = 0;
  uStack_110 = 0;
  local_108 = (longlong *)0x0;
  uStack_100 = 0;
  local_f8 = 0;
  uStack_f0 = 0;
  local_e8 = 0;
  uStack_e0 = 0;
  lVar3 = (*(code *)puVar1)(local_b8,&local_118,0x10);
  if (lVar3 == 0) {
    bVar6 = false;
    lVar5 = 0;
  }
  else {
    local_d8 = *local_108;
    uVar7 = extraout_XMM0_Da;
    do {
      lVar4 = 0;
      do {
        if (*local_108 != local_d8) {
          uVar7 = _objc_enumerationMutation();
        }
        cVar2 = (*(code *)puVar1)(uVar7,&cf_en);
        lVar5 = DAT_0277d5a8;
        if ((((cVar2 != '\0') ||
             (cVar2 = (*(code *)puVar1)(extraout_XMM0_Da_00,&cf_fr), lVar5 = DAT_0277d5b0,
             cVar2 != '\0')) ||
            (cVar2 = (*(code *)puVar1)(extraout_XMM0_Da_01,&cf_de), lVar5 = DAT_0277d5b8,
            cVar2 != '\0')) ||
           (((cVar2 = (*(code *)puVar1)(extraout_XMM0_Da_02,&cf_es), lVar5 = DAT_0277d5c0,
             cVar2 != '\0' ||
             (cVar2 = (*(code *)puVar1)(extraout_XMM0_Da_03,&cf_it), lVar5 = DAT_0277d5c8,
             cVar2 != '\0')) ||
            ((cVar2 = (*(code *)puVar1)(extraout_XMM0_Da_04,&cf_ja), lVar5 = DAT_0277d5d0,
             cVar2 != '\0' ||
             (cVar2 = (*(code *)puVar1)(extraout_XMM0_Da_05,&cf_sv), lVar5 = DAT_0277d5d8,
             cVar2 != '\0')))))) {
          if (lVar5 != 0) {
            FUN_00d50b00();
          }
          bVar6 = lVar5 != 0;
          goto LAB_00d3007e;
        }
        lVar4 = lVar4 + 1;
        uVar7 = extraout_XMM0_Da_06;
      } while (lVar3 != lVar4);
      lVar3 = (*(code *)puVar1)(local_b8,&local_118,0x10);
      bVar6 = false;
      lVar5 = 0;
      uVar7 = extraout_XMM0_Da_07;
    } while (lVar3 != 0);
  }
LAB_00d3007e:
  (*(code *)PTR__objc_release_024a99a0)();
  lVar3 = DAT_0277d5a8;
  if (lVar5 == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (lVar3 != 0) {
      FUN_00d50b00();
    }
    *unaff_RDI = lVar3;
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (!bVar6) {
      FUN_00d50b00();
    }
    *unaff_RDI = lVar5;
  }
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return unaff_RDI;
}


