// Function: FUN_00e2f480
// Address: 00e2f480
// Size: 787 bytes
// Class: GNString


/* WARNING: Removing unreachable block (ram,0x00e2f6ec) */
/* WARNING: Removing unreachable block (ram,0x00e2f6f8) */

undefined8 * FUN_00e2f480(void)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined8 uVar3;
  longlong lVar4;
  undefined8 *puVar5;
  undefined8 *unaff_RDI;
  longlong lVar6;
  undefined4 extraout_XMM0_Da;
  undefined8 local_138;
  undefined8 uStack_130;
  longlong *local_128;
  undefined8 uStack_120;
  undefined8 local_118;
  undefined8 uStack_110;
  undefined8 local_108;
  undefined8 uStack_100;
  longlong local_f8;
  longlong local_f0;
  undefined8 local_e8;
  undefined8 *local_c8;
  char local_c0;
  undefined1 local_b8 [128];
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &DAT_02572358;
  (*DAT_02572370)();
  _objc_alloc();
  local_e8 = (*(code *)PTR__objc_msgSend_024a9998)();
  uVar3 = (*(code *)PTR__objc_msgSend_024a9998)
                    (extraout_XMM0_Da,*(undefined8 *)PTR__NSURLIsVolumeKey_0249c1d8);
  (*(code *)PTR__objc_msgSend_024a9998)();
  (*(code *)PTR__objc_msgSend_024a9998)(2,uVar3);
  local_108 = 0;
  uStack_100 = 0;
  local_118 = 0;
  uStack_110 = 0;
  local_128 = (longlong *)0x0;
  uStack_120 = 0;
  local_138 = 0;
  uStack_130 = 0;
  lVar4 = (*(code *)PTR__objc_msgSend_024a9998)(local_b8,&local_138,0x10);
  if (lVar4 != 0) {
    local_f0 = *local_128;
    do {
      lVar6 = 0;
      local_f8 = lVar4;
      do {
        if (*local_128 != local_f0) {
          _objc_enumerationMutation();
        }
        puVar5 = (undefined8 *)FUN_00e8fc40();
        FUN_00d4ff40();
        *puVar5 = &DAT_02589080;
        puVar5[2] = 0;
        FUN_00d500e0();
        FUN_00e1d1d0();
        if (local_c0 == '\0') {
          if (local_c8 != (undefined8 *)0x0) {
            FUN_00d50b00();
            goto LAB_00e2f65d;
          }
          if (puVar5[2] != 0) {
            puVar5[2] = 0;
            goto LAB_00e2f690;
          }
        }
        else {
          local_c0 = '\0';
LAB_00e2f65d:
          puVar1 = (undefined8 *)puVar5[2];
          if (puVar1 != local_c8) {
            if (local_c8 != (undefined8 *)0x0) {
              FUN_00d50b00();
            }
            puVar5[2] = local_c8;
            if (puVar1 != (undefined8 *)0x0) {
LAB_00e2f690:
              FUN_00d50b20();
            }
          }
          if (local_c8 != (undefined8 *)0x0) {
            FUN_00d50b20();
          }
        }
        if ((local_c0 != '\0') && (local_c8 != (undefined8 *)0x0)) {
          FUN_00d50b20();
        }
        local_c0 = '\0';
        FUN_00d235a0();
        FUN_00d50b20();
        lVar6 = lVar6 + 1;
        local_c8 = puVar5;
      } while (local_f8 != lVar6);
      lVar4 = (*(code *)PTR__objc_msgSend_024a9998)(local_b8,&local_138,0x10);
    } while (lVar4 != 0);
  }
  (*(code *)PTR__objc_release_024a99a0)();
  *unaff_RDI = puVar2;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  if (*(longlong *)PTR____stack_chk_guard_024a9898 == local_38) {
    return unaff_RDI;
  }
                    /* WARNING: Subroutine does not return */
  ___stack_chk_fail();
}


