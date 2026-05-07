// Function: FUN_0097cf46
// Address: 0097cf46
// Size: 650 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_0097cf46(uint64_t param_1,uint64_t param_2,uint32_t param_3)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  void *pvVar4;
  uint32_t extraout_var;
  void *pvVar5;
  int64_t arg1;
  void *pvVar6;
  int64_t lVar7;
  int64_t this_ptr;
  size_t sVar8;
  
  bVar1 = *(byte *)(this_ptr + 8);
  pvVar5 = (void *)(uint64_t)(bVar1 >> 1);
  if ((bVar1 & 1) != 0) {
    pvVar5 = *(void **)(this_ptr + 0x10);
  }
  bVar2 = *(byte *)(arg1 + 8);
  if ((bVar2 & 1) == 0) {
    pvVar4 = (void *)(uint64_t)(bVar2 >> 1);
  }
  else {
    pvVar4 = *(void **)(arg1 + 0x10);
  }
  if (pvVar5 == pvVar4) {
    sVar8 = CONCAT31((int3)((uint)param_3 >> 8),1);
    if ((bVar2 & 1) == 0) {
      lVar7 = arg1 + 9;
    }
    else {
      lVar7 = *(int64_t *)(arg1 + 0x18);
    }
    if ((bVar1 & 1) == 0) {
      if (pvVar5 != (void *)0x0) {
        pvVar5 = (void *)0x0;
        do {
          if (*(char *)(this_ptr + 9 + (int64_t)pvVar5) != *(char *)(lVar7 + (int64_t)pvVar5)) {
            return 0;
          }
          pvVar5 = (void *)((int64_t)pvVar5 + 1);
        } while ((void *)(uint64_t)(bVar1 >> 1) != pvVar5);
      }
    }
    else if ((pvVar5 != (void *)0x0) &&
            (iVar3 = _memcmp((void *)(uint64_t)bVar1,pvVar5,sVar8), iVar3 != 0)) {
      return 0;
    }
    bVar1 = *(byte *)(this_ptr + 0x20);
    pvVar5 = (void *)(uint64_t)(bVar1 >> 1);
    if ((bVar1 & 1) != 0) {
      pvVar5 = *(void **)(this_ptr + 0x28);
    }
    bVar2 = *(byte *)(arg1 + 0x20);
    if ((bVar2 & 1) == 0) {
      pvVar4 = (void *)(uint64_t)(bVar2 >> 1);
    }
    else {
      pvVar4 = *(void **)(arg1 + 0x28);
    }
    if (pvVar5 == pvVar4) {
      sVar8 = CONCAT31((int3)(sVar8 >> 8),1);
      if ((bVar2 & 1) == 0) {
        lVar7 = arg1 + 0x21;
      }
      else {
        lVar7 = *(int64_t *)(arg1 + 0x30);
      }
      if ((bVar1 & 1) == 0) {
        if (pvVar5 != (void *)0x0) {
          pvVar5 = (void *)0x0;
          do {
            if (*(char *)(this_ptr + 0x21 + (int64_t)pvVar5) !=
                *(char *)(lVar7 + (int64_t)pvVar5)) {
              return 0;
            }
            pvVar5 = (void *)((int64_t)pvVar5 + 1);
          } while ((void *)(uint64_t)(bVar1 >> 1) != pvVar5);
        }
      }
      else if ((pvVar5 != (void *)0x0) &&
              (iVar3 = _memcmp((void *)(uint64_t)bVar1,pvVar5,sVar8), iVar3 != 0)) {
        return 0;
      }
      bVar1 = *(byte *)(this_ptr + 0x38);
      pvVar5 = (void *)(uint64_t)(bVar1 >> 1);
      if ((bVar1 & 1) != 0) {
        pvVar5 = *(void **)(this_ptr + 0x40);
      }
      bVar2 = *(byte *)(arg1 + 0x38);
      if ((bVar2 & 1) == 0) {
        pvVar4 = (void *)(uint64_t)(bVar2 >> 1);
      }
      else {
        pvVar4 = *(void **)(arg1 + 0x40);
      }
      if (pvVar5 == pvVar4) {
        sVar8 = CONCAT31((int3)(sVar8 >> 8),1);
        if ((bVar2 & 1) == 0) {
          lVar7 = arg1 + 0x39;
        }
        else {
          lVar7 = *(int64_t *)(arg1 + 0x48);
        }
        if ((bVar1 & 1) == 0) {
          if (pvVar5 != (void *)0x0) {
            pvVar5 = (void *)0x0;
            do {
              if (*(char *)(this_ptr + 0x39 + (int64_t)pvVar5) !=
                  *(char *)(lVar7 + (int64_t)pvVar5)) {
                return 0;
              }
              pvVar5 = (void *)((int64_t)pvVar5 + 1);
            } while ((void *)(uint64_t)(bVar1 >> 1) != pvVar5);
          }
        }
        else if ((pvVar5 != (void *)0x0) &&
                (iVar3 = _memcmp((void *)(uint64_t)bVar1,pvVar5,sVar8), iVar3 != 0)) {
          return 0;
        }
        bVar1 = *(byte *)(this_ptr + 0x50);
        pvVar4 = (void *)(uint64_t)(bVar1 >> 1);
        pvVar5 = pvVar4;
        if ((bVar1 & 1) != 0) {
          pvVar5 = *(void **)(this_ptr + 0x58);
        }
        bVar2 = *(byte *)(arg1 + 0x50);
        if ((bVar2 & 1) == 0) {
          pvVar6 = (void *)(uint64_t)(bVar2 >> 1);
        }
        else {
          pvVar6 = *(void **)(arg1 + 0x58);
        }
        if (pvVar5 == pvVar6) {
          if ((bVar2 & 1) == 0) {
            lVar7 = arg1 + 0x51;
          }
          else {
            lVar7 = *(int64_t *)(arg1 + 0x60);
          }
          if ((bVar1 & 1) == 0) {
            if (pvVar5 != (void *)0x0) {
              pvVar5 = (void *)0x0;
              do {
                if (*(char *)(this_ptr + 0x51 + (int64_t)pvVar5) !=
                    *(char *)(lVar7 + (int64_t)pvVar5)) {
                  return 0;
                }
                pvVar5 = (void *)((int64_t)pvVar5 + 1);
              } while (pvVar4 != pvVar5);
            }
          }
          else if (pvVar5 != (void *)0x0) {
            iVar3 = _memcmp((void *)(uint64_t)bVar1,pvVar5,CONCAT31((int3)(sVar8 >> 8),1));
            pvVar4 = (void *)CONCAT44(extraout_var,iVar3);
            if (iVar3 != 0) {
              return 0;
            }
          }
          if (((*(char *)(this_ptr + 0x68) == *(char *)(arg1 + 0x68)) &&
              (*(char *)(this_ptr + 0x6f) == *(char *)(arg1 + 0x6f))) &&
             ((*(char *)(this_ptr + 0x6f) == '\0' ||
              (*(char *)(this_ptr + 0x69) == *(char *)(arg1 + 0x69))))) {
            return CONCAT71((int7)((uint64_t)pvVar4 >> 8),1);
          }
        }
      }
    }
  }
  return 0;
}

