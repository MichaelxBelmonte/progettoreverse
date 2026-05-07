// Function: FUN_01ea9950
// Address: 01ea9950
// Size: 1293 bytes
// Class: Unknown
// String references:
//   "pointSize"
//   "fontDescriptor"


/* WARNING: Removing unreachable block (ram,0x01ea99ec) */
/* WARNING: Removing unreachable block (ram,0x01ea99f8) */

void FUN_01ea9950(void)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  undefined8 uVar5;
  longlong *plVar6;
  undefined *puVar7;
  int iVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  longlong *unaff_RDI;
  longlong lVar13;
  longlong lVar14;
  bool bVar15;
  longlong local_120;
  char local_118;
  longlong local_c8;
  char local_c0;
  undefined4 local_70;
  undefined4 uStack_6c;
  char local_68;
  undefined1 local_59;
  undefined4 local_58;
  undefined8 local_50;
  undefined1 *local_48;
  longlong local_38;
  
  local_38 = *(longlong *)PTR____stack_chk_guard_024a9898;
  lVar3 = *unaff_RDI;
  lVar14 = *(longlong *)(lVar3 + 0x38);
  if (*(char *)(lVar14 + 0x28) == '\0') {
    *(undefined1 *)(lVar14 + 0x28) = 1;
    plVar4 = *(longlong **)(lVar3 + 0x40);
    if (plVar4 != (longlong *)0x0) {
      FUN_00d50b00();
    }
    (**(code **)(*plVar4 + 0x380))();
    local_59 = FUN_01f26ec0();
    (**(code **)(*plVar4 + 0x3b0))();
    if ((local_c0 == '\0') && (local_c8 != 0)) {
      FUN_00d50b00();
    }
    local_58 = 0;
    local_50 = 1;
    local_48 = &local_59;
    uVar9 = _CTParagraphStyleCreate();
    uVar10 = _CFAttributedStringGetLength();
    _CFAttributedStringSetAttribute
              (*(undefined8 *)PTR__kCTParagraphStyleAttributeName_024a9928,uVar10,uVar9);
    lVar3 = *(longlong *)(*unaff_RDI + 0x58);
    if (lVar3 != 0) {
      iVar8 = *(int *)(lVar3 + 0xc);
      if (0 < iVar8) {
        uVar9 = *(undefined8 *)PTR__kCTForegroundColorAttributeName_024a9920;
        uVar10 = *(undefined8 *)PTR__kCTFontAttributeName_024a9918;
        uVar5 = *(undefined8 *)PTR__kCTUnderlineStyleAttributeName_024a9930;
        lVar14 = 0;
        do {
          lVar13 = *(longlong *)(*(longlong *)(lVar3 + 0x10) + lVar14 * 8);
          if ((int)lVar14 == iVar8 + -1) {
            iVar8 = *(int *)(*unaff_RDI + 0x54);
            plVar6 = *(longlong **)(lVar13 + 0x10);
          }
          else {
            iVar8 = *(int *)(*(longlong *)
                              (*(longlong *)(*(longlong *)(*unaff_RDI + 0x58) + 0x10) + 8 +
                              lVar14 * 8) + 0xc);
            plVar6 = *(longlong **)(lVar13 + 0x10);
          }
          if (plVar6 != (longlong *)0x0) {
            iVar1 = *(int *)(lVar13 + 0xc);
            FUN_00d50b00();
            (**(code **)(*plVar6 + 0x378))();
            if (CONCAT44(uStack_6c,local_70) == 0) {
              bVar15 = true;
            }
            else {
              (**(code **)(*plVar6 + 0x388))();
              bVar15 = local_120 == 0;
              if ((local_118 != '\0') && (local_120 != 0)) {
                FUN_00d50b20();
              }
            }
            if ((local_68 != '\0') && (CONCAT44(uStack_6c,local_70) != 0)) {
              FUN_00d50b20();
            }
            puVar7 = PTR__objc_msgSend_024a9998;
            if (!bVar15) {
              (**(code **)(*plVar6 + 0x378))();
              if ((local_68 != '\0') && (CONCAT44(uStack_6c,local_70) != 0)) {
                FUN_00d50b20();
              }
              (*(code *)puVar7)();
              (*(code *)puVar7)();
              uVar11 = _CTFontCreateWithFontDescriptor();
              (**(code **)(*plVar6 + 0x388))();
              if (local_68 == '\0') {
                if (CONCAT44(uStack_6c,local_70) != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_68 = '\0';
              }
              uVar12 = FUN_01f25960();
              if (CONCAT44(uStack_6c,local_70) != 0) {
                FUN_00d50b20();
              }
              if ((local_68 != '\0') && (CONCAT44(uStack_6c,local_70) != 0)) {
                FUN_00d50b20();
              }
              lVar13 = (longlong)iVar8 - (longlong)iVar1;
              _CFAttributedStringSetAttribute(uVar9,lVar13,uVar12);
              _CFAttributedStringSetAttribute(uVar10,lVar13,uVar11);
              (**(code **)(*plVar6 + 0x378))();
              uVar2 = *(uint *)(*(longlong *)(CONCAT44(uStack_6c,local_70) + 0x10) + 8);
              if ((local_68 != '\0') && (CONCAT44(uStack_6c,local_70) != 0)) {
                FUN_00d50b20();
              }
              if ((uVar2 & 4) != 0) {
                local_70 = 1;
                uVar11 = _CFNumberCreate();
                _CFAttributedStringSetAttribute(uVar5,lVar13,uVar11);
                _CFRelease();
              }
              _CFRelease();
              _CFRelease();
            }
            FUN_00d50b20();
          }
          lVar14 = lVar14 + 1;
          iVar8 = *(int *)(lVar3 + 0xc);
        } while ((int)lVar14 < iVar8);
      }
      FUN_01ead2f0();
    }
    _CFRelease();
    if (local_c8 != 0) {
      FUN_00d50b20();
    }
    if (plVar4 != (longlong *)0x0) {
      FUN_00d50b20();
    }
  }
  if (*(longlong *)PTR____stack_chk_guard_024a9898 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return;
}


