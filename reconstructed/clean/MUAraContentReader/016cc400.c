// Function: FUN_016cc400
// Address: 016cc400
// Size: 623 bytes
// Class: MUAraContentReader
// === MUAraContentReader properties ===
//                   _playbackWrappers
//                   _previewWrappers
//                   _guiWrappers
//                   _isRestoringObjects
//                   _structureProblemFound
//                   _isHostEditingDocument
//                   _resetUndoWhenHostEndsEditing
//                   _documentDataChanged
//                   _didSimulateBeginEditing
//                   _trackSelectionDidChange
//                   _simulatedAra1RegionSequences
//                   _musicalContextData


void FUN_016cc400(uint64_t param_1,uint64_t param_2,size_t param_3)

{
  uint64_t *puVar1;
  uint uVar2;
  uint64_t uVar3;
  char cVar4;
  uint64_t uVar5;
  int iVar6;
  void *pvVar7;
  int iVar8;
  uint64_t arg1;
  int64_t this_ptr;
  uint64_t uVar9;
  int iVar10;
  int64_t lVar12;
  char local_40;
  uint uVar11;
  
  uVar9 = arg1 >> 0x20;
  if (uVar9 != 0) {
    puVar1 = (uint64_t *)(this_ptr + 0x70);
    uVar5 = *(uint64_t *)(this_ptr + 0x70);
    if (7 < *(int *)(uVar5 + 0x18)) {
      lVar12 = 1;
      iVar8 = 0;
      iVar10 = *(int *)(*(int64_t *)(uVar5 + 0x10) + 4);
      uVar3 = uVar9;
      do {
        if ((iVar10 != 0) && ((int)uVar3 != 0)) {
          cVar4 = FUN_00e7c000();
          if (cVar4 != '\0') {
            if (iVar8 != -8) {
              return;
            }
            uVar5 = *puVar1;
            break;
          }
          uVar5 = *puVar1;
        }
        iVar10 = *(int *)(uVar5 + 0x18);
        iVar6 = iVar10 + 7;
        if (-1 < iVar10) {
          iVar6 = iVar10;
        }
        if (iVar6 >> 3 <= lVar12) break;
        uVar3 = arg1 >> 0x20;
        iVar8 = iVar8 + 8;
        lVar12 = lVar12 + 1;
        iVar10 = *(int *)(*(int64_t *)(uVar5 + 0x10) + -4 + lVar12 * 8);
      } while( true );
    }
    if (uVar5 != 0) {
      FUN_00d50b00();
    }
    FUN_00c8e4f0();
    if ((local_40 == '\0') && (arg1 != 0)) {
      FUN_00d50b00();
    }
    FUN_00c92170();
    FUN_00c92160();
    if (uVar5 != 0) {
      FUN_00d50b20();
    }
    uVar5 = *puVar1;
    uVar2 = *(uint *)(uVar5 + 0x18);
    pvVar7 = (void *)(uint64_t)uVar2;
    uVar11 = uVar2 + 7;
    if (-1 < (int)uVar2) {
      uVar11 = uVar2;
    }
    iVar10 = (int)uVar11 >> 3;
    if (7 < (int)uVar2) {
      lVar12 = 1;
      iVar8 = *(int *)(*(int64_t *)(uVar5 + 0x10) + 4);
      do {
        if ((iVar8 != 0) && ((int)uVar9 != 0)) {
          cVar4 = FUN_00e7c020();
          if (cVar4 != '\0') {
            iVar10 = (int)lVar12 + -1;
            break;
          }
          uVar5 = *puVar1;
        }
        iVar8 = *(int *)(uVar5 + 0x18);
        iVar6 = iVar8 + 7;
        if (-1 < iVar8) {
          iVar6 = iVar8;
        }
        pvVar7 = (void *)(int64_t)(iVar6 >> 3);
        if ((int64_t)pvVar7 <= lVar12) break;
        uVar9 = arg1 >> 0x20;
        lVar12 = lVar12 + 1;
        iVar8 = *(int *)(*(int64_t *)(uVar5 + 0x10) + -4 + lVar12 * 8);
      } while( true );
    }
    iVar8 = *(int *)(arg1 + 0x18);
    FUN_00c8e340();
    lVar12 = *(int64_t *)(arg1 + 0x10);
    _memmove(pvVar7,(void *)(int64_t)(iVar8 + iVar10 * -8),param_3);
    *(uint64_t *)(lVar12 + (int64_t)iVar10 * 8) = arg1;
    FUN_00d64850();
    uVar9 = *puVar1;
    if (uVar9 != arg1) {
      FUN_00d50b00();
      *puVar1 = arg1;
      if (uVar9 != 0) {
        FUN_00d50b20();
      }
    }
    FUN_00d64910();
    FUN_00d50b20();
  }
  return;
}

