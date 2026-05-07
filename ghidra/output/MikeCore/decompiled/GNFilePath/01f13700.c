// Function: FUN_01f13700
// Address: 01f13700
// Size: 1527 bytes
// Class: GNFilePath
// String references:
//   "defaultManager"
//   "fileSystemRepresentation"


/* WARNING: Removing unreachable block (ram,0x01f13c8d) */
/* WARNING: Removing unreachable block (ram,0x01f13c99) */

undefined8 * FUN_01f13700(void)

{
  bool bVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  undefined8 *puVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  longlong lVar9;
  undefined8 *unaff_RDI;
  uint uVar10;
  longlong lVar11;
  ulonglong uVar12;
  ulonglong uVar13;
  longlong *plVar14;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  undefined4 extraout_XMM0_Da_01;
  undefined8 local_188;
  undefined8 uStack_180;
  longlong *local_178;
  undefined8 uStack_170;
  undefined8 local_168;
  undefined8 uStack_160;
  undefined8 local_158;
  undefined8 uStack_150;
  undefined *local_148;
  undefined *local_140;
  longlong local_138;
  longlong local_130;
  undefined8 local_128;
  undefined8 local_120;
  longlong local_100;
  char local_f8;
  longlong *local_d0;
  char local_c8;
  undefined1 local_b8 [128];
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  puVar5 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar5 = &DAT_02572358;
  (*DAT_02572370)();
  _objc_alloc();
  uVar6 = (*(code *)PTR__objc_msgSend_024a9998)();
  uVar7 = (*(code *)PTR__objc_msgSend_024a9998)(extraout_XMM0_Da,1);
  uVar7 = (*(code *)PTR__objc_msgSend_024a9998)
                    (*(undefined8 *)PTR__NSPasteboardURLReadingFileURLsOnlyKey_0249c170,uVar7);
  uVar8 = (*(code *)PTR__objc_msgSend_024a9998)();
  uVar8 = (*(code *)PTR__objc_msgSend_024a9998)(extraout_XMM0_Da_00,uVar8);
  uVar7 = (*(code *)PTR__objc_msgSend_024a9998)(uVar7,uVar8);
  local_158 = 0;
  uStack_150 = 0;
  local_168 = 0;
  uStack_160 = 0;
  local_178 = (longlong *)0x0;
  uStack_170 = 0;
  local_188 = 0;
  uStack_180 = 0;
  local_128 = uVar6;
  lVar9 = (*(code *)PTR__objc_msgSend_024a9998)(local_b8,&local_188,0x10);
  puVar2 = PTR__objc_msgSend_024a9998;
  if (lVar9 != 0) {
    local_130 = *local_178;
    local_120 = uVar7;
    do {
      local_148 = PTR_s_fileSystemRepresentation_026c9c38;
      local_140 = PTR_s_defaultManager_026c9388;
      lVar11 = 0;
      local_138 = lVar9;
      do {
        if (*local_178 != local_130) {
          _objc_enumerationMutation();
        }
        uVar6 = (*(code *)puVar2)();
        (*(code *)puVar2)();
        iVar4 = FUN_00e7dde0();
        (*(code *)puVar2)((longlong)iVar4,uVar6);
        FUN_00e1ccf0();
        if (local_f8 == '\0') {
          if (local_100 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_f8 = '\0';
        }
        FUN_00cddf30();
        if (local_c8 == '\0') {
          if (local_d0 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          local_c8 = '\0';
        }
        FUN_00d21140();
        if (local_d0 != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (local_100 != 0) {
          FUN_00d50b20();
        }
        if ((local_f8 != '\0') && (local_100 != 0)) {
          FUN_00d50b20();
        }
        lVar11 = lVar11 + 1;
      } while (local_138 != lVar11);
      lVar9 = (*(code *)puVar2)(local_b8,&local_188,0x10);
    } while (lVar9 != 0);
  }
  (*(code *)PTR__objc_release_024a99a0)();
  uVar10 = *(uint *)((longlong)puVar5 + 0xc);
  uVar12 = (ulonglong)uVar10;
  if (0 < (int)uVar10) {
    do {
      uVar13 = uVar12 - 1;
      plVar14 = *(longlong **)(puVar5[2] + (uVar13 & 0xffffffff) * 8);
      cVar3 = (**(code **)(*plVar14 + 0x4c0))();
      if ((cVar3 != '\0') || (cVar3 = (**(code **)(*plVar14 + 0x4a8))(), cVar3 != '\0')) {
        FUN_00d50b00();
        do {
          cVar3 = (**(code **)(*plVar14 + 0x4c0))();
          if (cVar3 == '\0') {
            cVar3 = (**(code **)(*plVar14 + 0x4a8))();
            if (cVar3 == '\0') {
              FUN_00d233f0(extraout_XMM0_Da_01,uVar13 & 0xffffffff);
              FUN_00d50b20();
              goto LAB_01f13aef;
            }
            (**(code **)(*plVar14 + 0x4b0))();
            if (local_d0 != plVar14) {
              if (local_c8 != '\0') {
                FUN_00d50b20();
                plVar14 = local_d0;
                goto LAB_01f13b47;
              }
              if (local_d0 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              FUN_00d50b20();
              plVar14 = local_d0;
            }
            if ((local_c8 != '\0') && (local_d0 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
          }
          else {
            (**(code **)(*plVar14 + 0x4c8))();
            if (local_d0 == plVar14) {
              if ((local_c8 != '\0') && (plVar14 != (longlong *)0x0)) {
                FUN_00d50b20();
              }
            }
            else if (local_c8 == '\0') {
              if (local_d0 != (longlong *)0x0) {
                FUN_00d50b00();
              }
              FUN_00d50b20();
              plVar14 = local_d0;
            }
            else {
              FUN_00d50b20();
              plVar14 = local_d0;
            }
          }
LAB_01f13b47:
        } while (plVar14 != (longlong *)0x0);
        FUN_00d23620();
      }
LAB_01f13aef:
      bVar1 = 1 < (longlong)uVar12;
      uVar12 = uVar13;
    } while (bVar1);
    uVar10 = *(uint *)((longlong)puVar5 + 0xc);
  }
  if (uVar10 == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    FUN_00d50b20();
  }
  else {
    *unaff_RDI = puVar5;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return unaff_RDI;
}


