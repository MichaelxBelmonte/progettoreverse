// Function: FUN_01736840
// Address: 01736840
// Size: 636 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_01736840(void* param_1)

{
  char cVar1;
  void *pvVar2;
  int64_t lVar3;
  void* pVar4;
  char *pcVar5;
  int64_t unaff_RBX;
  uint64_t uVar6;
  int64_t this_ptr;
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  if ((*(char *)(this_ptr + 0x68) == '\0') &&
     (unaff_RBX = *(int64_t *)(this_ptr + 0x60), unaff_RBX != 0)) {
    pvVar2 = _pthread_getspecific(param_1);
    if (pvVar2 != (void *)0x0) {
      unaff_RBX = *(int64_t *)(this_ptr + 0x60);
      lVar3 = FUN_00e8b990();
      if (lVar3 != 0) {
        unaff_RBX = *(int64_t *)(unaff_RBX + 0x20 + (uint64_t)(*(uint *)(lVar3 + 0x154) & 1) * 8);
      }
    }
    FUN_0124aba0();
    if (local_40[0] == '\0') {
      if (local_48 != 0) {
        FUN_00d50b00();
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        goto LAB_017368f1;
      }
    }
    else if (local_48 != 0) {
LAB_017368f1:
      if (*(int *)(local_48 + 0xc) != 0) {
        FUN_00d23310();
        pVar4 = CONCAT31((int3)(param_1 >> 8),local_40[0]);
        pcVar5 = local_38;
        if (local_40[0] != '\0') {
          pcVar5 = local_40;
        }
        local_38[0] = local_40[0];
        *pcVar5 = '\0';
        if ((local_40[0] != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if ((local_38[0] == '\0') && (local_48 != 0)) {
          FUN_00d50b00();
        }
        pvVar2 = _pthread_getspecific(pVar4);
        if (pvVar2 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_0150eb60();
        if (local_40[0] == '\0') {
          if (local_48 != 0) {
            FUN_00d50b00();
            if ((local_40[0] != '\0') && (local_48 != 0)) {
              FUN_00d50b20();
            }
            goto LAB_017369b9;
          }
        }
        else if (local_48 != 0) {
LAB_017369b9:
          pvVar2 = _pthread_getspecific(pVar4);
          if (pvVar2 != (void *)0x0) {
            FUN_00e8b990();
          }
          FUN_01822e80();
          if (local_40[0] == '\0') {
            if (local_48 != 0) {
              FUN_00d50b00();
              if ((local_40[0] != '\0') && (local_48 != 0)) {
                FUN_00d50b20();
              }
              goto LAB_01736a29;
            }
          }
          else if (local_48 != 0) {
LAB_01736a29:
            pvVar2 = _pthread_getspecific(pVar4);
            if (pvVar2 != (void *)0x0) {
              FUN_00e8b990();
            }
            cVar1 = FUN_01770870();
            if (cVar1 != '\0') {
              FUN_00d50b20();
              FUN_00d50b20();
              goto LAB_01736a76;
            }
            FUN_00d50b20();
          }
          FUN_00d50b20();
          if (local_48 != 0) {
            FUN_00d50b20();
          }
          uVar6 = CONCAT71((int7)((uint64_t)local_48 >> 8),1);
          FUN_00d50b20();
          goto LAB_01736863;
        }
LAB_01736a76:
        unaff_RBX = local_48;
        if (local_48 != 0) {
          FUN_00d50b20();
        }
      }
      FUN_00d50b20();
    }
  }
  uVar6 = CONCAT71((int7)((uint64_t)unaff_RBX >> 8),*(char *)(this_ptr + 0x68) != '\0');
LAB_01736863:
  return uVar6 & 0xffffffff;
}

