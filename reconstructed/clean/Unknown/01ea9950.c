// Function: FUN_01ea9950
// Address: 01ea9950
// Size: 1293 bytes
// Class: Unknown
// String references:
//   "pointSize"
//   "fontDescriptor"

void FUN_01ea9950(void)

{
  int iVar1;
  uint uVar2;
  int64_t lVar3;
  int64_t *plVar4;
  uint64_t uVar5;
  int64_t *plVar6;
  void*puVar7;
  int iVar8;
  uint64_t uVar9;
  uint64_t uVar10;
  uint64_t uVar11;
  uint64_t uVar12;
  int64_t *this_ptr;
  int64_t lVar13;
  int64_t lVar14;
  bool bVar15;
  int64_t local_120;
  char local_118;
  int64_t local_c8;
  char local_c0;
  uint32_t local_70;
  uint32_t uStack_6c;
  char local_68;
  uint8_t local_59;
  uint32_t local_58;
  uint64_t local_50;
  void*local_48;
  int64_t local_38;
  
  local_38 = *(int64_t *)PTR____stack_chk_guard_024a9898;
  lVar3 = *this_ptr;
  lVar14 = *(int64_t *)(lVar3 + 0x38);
  if (*(char *)(lVar14 + 0x28) == '\0') {
    *(void*)(lVar14 + 0x28) = 1;
    plVar4 = *(int64_t **)(lVar3 + 0x40);
    if (plVar4 != (int64_t *)0x0) {
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
              (*(void*)PTR__kCTParagraphStyleAttributeName_024a9928,uVar10,uVar9);
    lVar3 = *(int64_t *)(*this_ptr + 0x58);
    if (lVar3 != 0) {
      iVar8 = *(int *)(lVar3 + 0xc);
      if (0 < iVar8) {
        uVar9 = *(void*)PTR__kCTForegroundColorAttributeName_024a9920;
        uVar10 = *(void*)PTR__kCTFontAttributeName_024a9918;
        uVar5 = *(void*)PTR__kCTUnderlineStyleAttributeName_024a9930;
        lVar14 = 0;
        do {
          lVar13 = *(int64_t *)(*(int64_t *)(lVar3 + 0x10) + lVar14 * 8);
          if ((int)lVar14 == iVar8 + -1) {
            iVar8 = *(int *)(*this_ptr + 0x54);
            plVar6 = *(int64_t **)(lVar13 + 0x10);
          }
          else {
            iVar8 = *(int *)(*(int64_t *)
                              (*(int64_t *)(*(int64_t *)(*this_ptr + 0x58) + 0x10) + 8 +
                              lVar14 * 8) + 0xc);
            plVar6 = *(int64_t **)(lVar13 + 0x10);
          }
          if (plVar6 != (int64_t *)0x0) {
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
              (*puVar7)();
              (*puVar7)();
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
              lVar13 = (int64_t)iVar8 - (int64_t)iVar1;
              _CFAttributedStringSetAttribute(uVar9,lVar13,uVar12);
              _CFAttributedStringSetAttribute(uVar10,lVar13,uVar11);
              (**(code **)(*plVar6 + 0x378))();
              uVar2 = *(uint *)(*(int64_t *)(CONCAT44(uStack_6c,local_70) + 0x10) + 8);
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
    if (plVar4 != (int64_t *)0x0) {
      FUN_00d50b20();
    }
  }
  if (*(int64_t *)PTR____stack_chk_guard_024a9898 != local_38) {
                        ___stack_chk_fail();
  }
  return;
}

