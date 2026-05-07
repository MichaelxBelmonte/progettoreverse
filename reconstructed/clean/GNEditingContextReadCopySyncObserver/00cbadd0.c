// Function: FUN_00cbadd0
// Address: 00cbadd0
// Size: 1086 bytes
// Class: GNEditingContextReadCopySyncObserver
// === GNEditingContextReadCopySyncObserver properties ===
//                   _readCopySyncObserversLock
//                   _objectsWithReadCopies
//                   _message
//                   _developerMessage


void FUN_00cbadd0(int64_t *param_1,int64_t *param_2)

{
  int *piVar1;
  int64_t lVar2;
  int64_t lVar3;
  int iVar4;
  int64_t lVar5;
  char *pcVar6;
  void *pvVar7;
  int64_t lVar8;
  void* pVar9;
  char *pcVar10;
  int64_t *arg1;
  int64_t this_ptr;
  uint uVar11;
  uint64_t uVar12;
  int64_t lVar13;
  char local_68 [8];
  int64_t local_60;
  char local_58;
  char local_38 [8];
  
  if (*(int64_t *)(this_ptr + 0x90) != 0) {
    (**(code **)(**(int64_t **)(this_ptr + 0xc0) + 0x368))();
    if (*(int *)(this_ptr + 0xac) != 0) {
      lVar8 = *(int64_t *)(this_ptr + 0xb0);
      uVar11 = *(uint *)(lVar8 + 0xc);
      uVar12 = (uint64_t)uVar11;
      if (0 < (int)uVar11) {
        while( true ) {
          uVar11 = uVar11 - 1;
          lVar8 = *(int64_t *)(*(int64_t *)(lVar8 + 0x10) + (uint64_t)uVar11 * 8);
          if (lVar8 != 0) {
            FUN_00d50b00();
          }
          if (((*(int64_t *)(lVar8 + 0x10) == *arg1) &&
              ((*param_2 == 0 || (*(int64_t *)(lVar8 + 0x18) == *param_2)))) &&
             ((*param_1 == 0 || (*(int64_t *)(lVar8 + 0x20) == *param_1)))) {
            FUN_00e17e50();
            FUN_00d23620();
          }
          FUN_00d50b20();
          if ((int64_t)uVar12 < 2) break;
          uVar12 = uVar12 - 1;
          lVar8 = *(int64_t *)(this_ptr + 0xb0);
        }
      }
    }
    lVar8 = *arg1;
    lVar5 = FUN_00c8df20();
    if ((lVar5 == 0) || (lVar5 = *(int64_t *)(lVar5 + 8), lVar5 == 0)) {
      (**(code **)(**(int64_t **)(this_ptr + 0xc0) + 0x378))();
    }
    else {
      FUN_00d50b00();
      uVar11 = *(uint *)(lVar5 + 0xc);
      if (0 < (int)uVar11) {
        lVar13 = (uint64_t)uVar11 + 1;
        do {
          uVar11 = uVar11 - 1;
          lVar2 = *(int64_t *)(*(int64_t *)(lVar5 + 0x10) + (uint64_t)uVar11 * 8);
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          if (((*(char *)(lVar2 + 0x38) == '\0') &&
              ((*param_2 == 0 || (*(int64_t *)(lVar2 + 0x18) == *param_2)))) &&
             ((*param_1 == 0 || (*(int64_t *)(lVar2 + 0x20) == *param_1)))) {
            FUN_00e17e50();
            lVar3 = *(int64_t *)(lVar2 + 0x30);
            if (lVar3 != 0) {
              FUN_00d50b00();
            }
            FUN_00cb93b0();
            local_38[0] = local_68[0];
            pcVar10 = local_38;
            pcVar6 = local_68;
            if (local_68[0] == '\0') {
              pcVar6 = pcVar10;
            }
            *pcVar6 = '\0';
            if ((local_68[0] != '\0') && (lVar8 != 0)) {
              FUN_00d50b20();
            }
            pVar9 = (void*)pcVar10;
            if (lVar3 != 0) {
              FUN_00d50b20();
            }
            if (lVar8 != 0) {
              piVar1 = (int *)(lVar8 + 0x1c);
              *piVar1 = *piVar1 + -1;
              if (*piVar1 == 0) {
                lVar3 = *(int64_t *)(lVar2 + 0x30);
                if (lVar3 != 0) {
                  FUN_00d50b00();
                }
                FUN_00cb9610();
                if (lVar3 != 0) {
                  FUN_00d50b20();
                }
              }
              if (local_38[0] != '\0') {
                FUN_00d50b20();
              }
            }
            if (*(char *)(lVar2 + 0x39) != '\0') {
              pvVar7 = _pthread_getspecific(pVar9);
              if (pvVar7 != (void *)0x0) {
                FUN_00e8b990();
              }
              local_58 = 0;
              lVar2 = *(int64_t *)(lVar2 + 0x20);
              if (lVar2 != 0) {
                FUN_00d50b00();
              }
              local_58 = '\x01';
              local_60 = lVar2;
              FUN_00e8c420();
              if ((local_58 != '\0') && (local_60 != 0)) {
                FUN_00d50b20();
              }
            }
            if (*(int *)(this_ptr + 0xac) == 0) {
              FUN_00d23620();
              FUN_00cba120();
            }
          }
          FUN_00d50b20();
          lVar13 = lVar13 + -1;
        } while (1 < lVar13);
      }
      if (*(int *)(this_ptr + 0xac) == 0) {
        if ((*(int *)(lVar5 + 0xc) == 0) && (lVar8 = FUN_00c8e050(), lVar8 != 0)) {
          if (*(int64_t *)(lVar8 + 8) != 0) {
            FUN_00d50b20();
          }
          FUN_00e83070();
        }
      }
      else {
        FUN_00c8e000();
      }
      if ((*(char *)(this_ptr + 0xe0) != '\0') && (iVar4 = FUN_00c8d620(), iVar4 == 0)) {
        *(void*)(this_ptr + 0xe0) = 0;
      }
      (**(code **)(**(int64_t **)(this_ptr + 0xc0) + 0x378))();
      FUN_00d50b20();
    }
  }
  return;
}

