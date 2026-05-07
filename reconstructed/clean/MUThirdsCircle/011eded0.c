// Function: FUN_011eded0
// Address: 011eded0
// Size: 619 bytes
// Class: MUThirdsCircle
// === MUThirdsCircle properties ===
//                   _thirdsCircleValues
//                   _chordExtension
//                   _fundamentalPitchClass
//                   _matchQuality


void FUN_011eded0(int64_t param_1,int *param_2,int *param_3,int param_4)

{
  int64_t lVar1;
  byte bVar2;
  uint64_t uVar3;
  uint64_t uVar4;
  int iVar5;
  int64_t arg1;
  int64_t this_ptr;
  uint64_t uVar6;
  
  if (*(char *)(this_ptr + 0x30) == '\0') {
    uVar4 = *(uint64_t *)(this_ptr + 0x10);
    bVar2 = *(byte *)(this_ptr + 0x20);
    if ((int64_t)*(int *)(this_ptr + 0x18) <
        (int64_t)((int64_t)param_4 + (uVar4 & (int64_t)(int)*(uint *)(this_ptr + 0x1c)))) {
      iVar5 = *(int *)(this_ptr + 0x18) - ((uint)uVar4 & *(uint *)(this_ptr + 0x1c));
      *param_2 = iVar5;
      param_4 = param_4 - iVar5;
      *param_3 = param_4;
      if (bVar2 == 0) {
        return;
      }
    }
    else {
      *param_2 = param_4;
      param_4 = 0;
      *param_3 = 0;
      if (bVar2 == 0) {
        return;
      }
    }
    uVar4 = uVar4 & (int64_t)*(int *)(this_ptr + 0x1c);
    uVar6 = (uint64_t)(bVar2 & 3);
    if ((uint64_t)bVar2 - 1 < 3) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0;
      lVar1 = uVar4 * 4;
      do {
        *(int64_t *)(arg1 + uVar3 * 8) =
             *(int64_t *)(*(int64_t *)(this_ptr + 0x28) + uVar3 * 8) + lVar1;
        *(int64_t *)(arg1 + 8 + uVar3 * 8) =
             *(int64_t *)(*(int64_t *)(this_ptr + 0x28) + 8 + uVar3 * 8) + lVar1;
        *(int64_t *)(arg1 + 0x10 + uVar3 * 8) =
             *(int64_t *)(*(int64_t *)(this_ptr + 0x28) + 0x10 + uVar3 * 8) + lVar1;
        *(int64_t *)(arg1 + 0x18 + uVar3 * 8) =
             *(int64_t *)(*(int64_t *)(this_ptr + 0x28) + 0x18 + uVar3 * 8) + lVar1;
        uVar3 = uVar3 + 4;
      } while ((bVar2 & 0xfffffffc) != uVar3);
    }
    if (uVar6 != 0) {
      do {
        *(uint64_t *)(arg1 + uVar3 * 8) =
             *(int64_t *)(*(int64_t *)(this_ptr + 0x28) + uVar3 * 8) + uVar4 * 4;
        uVar3 = uVar3 + 1;
        uVar6 = uVar6 - 1;
      } while (uVar6 != 0);
    }
    if (param_4 != 0) {
      uVar4 = (uint64_t)(bVar2 & 3);
      if ((uint64_t)bVar2 - 1 < 3) {
        uVar6 = 0;
      }
      else {
        uVar6 = 0;
        do {
          *(void*)(param_1 + uVar6 * 8) =
               *(void*)(*(int64_t *)(this_ptr + 0x28) + uVar6 * 8);
          *(void*)(param_1 + 8 + uVar6 * 8) =
               *(void*)(*(int64_t *)(this_ptr + 0x28) + 8 + uVar6 * 8);
          *(void*)(param_1 + 0x10 + uVar6 * 8) =
               *(void*)(*(int64_t *)(this_ptr + 0x28) + 0x10 + uVar6 * 8);
          *(void*)(param_1 + 0x18 + uVar6 * 8) =
               *(void*)(*(int64_t *)(this_ptr + 0x28) + 0x18 + uVar6 * 8);
          uVar6 = uVar6 + 4;
        } while ((bVar2 & 0xfffffffc) != uVar6);
      }
      for (; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(void*)(param_1 + uVar6 * 8) =
             *(void*)(*(int64_t *)(this_ptr + 0x28) + uVar6 * 8);
        uVar6 = uVar6 + 1;
      }
    }
  }
  else {
    bVar2 = *(byte *)(this_ptr + 0x20);
    if ((uint64_t)bVar2 != 0) {
      uVar6 = (int64_t)*(int *)(this_ptr + 0x1c) & *(uint64_t *)(this_ptr + 0x10);
      uVar4 = (uint64_t)(bVar2 & 3);
      if ((uint64_t)bVar2 - 1 < 3) {
        uVar3 = 0;
      }
      else {
        uVar3 = 0;
        lVar1 = uVar6 * 4;
        do {
          *(int64_t *)(arg1 + uVar3 * 8) =
               *(int64_t *)(*(int64_t *)(this_ptr + 0x28) + uVar3 * 8) + lVar1;
          *(int64_t *)(arg1 + 8 + uVar3 * 8) =
               *(int64_t *)(*(int64_t *)(this_ptr + 0x28) + 8 + uVar3 * 8) + lVar1;
          *(int64_t *)(arg1 + 0x10 + uVar3 * 8) =
               *(int64_t *)(*(int64_t *)(this_ptr + 0x28) + 0x10 + uVar3 * 8) + lVar1;
          *(int64_t *)(arg1 + 0x18 + uVar3 * 8) =
               *(int64_t *)(*(int64_t *)(this_ptr + 0x28) + 0x18 + uVar3 * 8) + lVar1;
          uVar3 = uVar3 + 4;
        } while ((bVar2 & 0xfffffffc) != uVar3);
      }
      if (uVar4 != 0) {
        do {
          *(uint64_t *)(arg1 + uVar3 * 8) =
               *(int64_t *)(*(int64_t *)(this_ptr + 0x28) + uVar3 * 8) + uVar6 * 4;
          uVar3 = uVar3 + 1;
          uVar4 = uVar4 - 1;
        } while (uVar4 != 0);
      }
    }
    *param_2 = param_4;
    *param_3 = 0;
  }
  return;
}

