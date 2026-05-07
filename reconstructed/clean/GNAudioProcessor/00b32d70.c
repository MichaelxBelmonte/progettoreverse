// Function: FUN_00b32d70
// Address: 00b32d70
// Size: 938 bytes
// Class: GNAudioProcessor

void FUN_00b32d70(uint64_t param_1,uint32_t param_2)

{
  byte bVar1;
  uint64_t uVar2;
  uint64_t uVar3;
  int64_t arg1;
  int64_t *this_ptr;
  uint64_t uVar4;
  int64_t *plVar5;
  uint uVar6;
  uint uVar7;
  char cVar8;
  
  bVar1 = *(byte *)((int64_t)this_ptr + 0x14);
  cVar8 = arg1 == 0;
  if ((uint64_t)bVar1 != 0) {
    uVar3 = (uint64_t)(bVar1 & 3);
    if ((uint64_t)bVar1 - 1 < 3) {
      uVar2 = 0;
    }
    else {
      uVar2 = 0;
      do {
        if (*(int64_t *)(arg1 + uVar2 * 8) == 0) {
          cVar8 = '\x02';
        }
        if (*(int64_t *)(arg1 + 8 + uVar2 * 8) == 0) {
          cVar8 = '\x02';
        }
        if (*(int64_t *)(arg1 + 0x10 + uVar2 * 8) == 0) {
          cVar8 = '\x02';
        }
        if (*(int64_t *)(arg1 + 0x18 + uVar2 * 8) == 0) {
          cVar8 = '\x02';
        }
        uVar2 = uVar2 + 4;
      } while ((bVar1 & 0xfffffffc) != uVar2);
    }
    if (uVar3 != 0) {
      uVar4 = 0;
      do {
        if (*(int64_t *)(arg1 + uVar2 * 8 + uVar4 * 8) == 0) {
          cVar8 = '\x02';
        }
        uVar4 = uVar4 + 1;
      } while (uVar3 != uVar4);
    }
  }
  if (cVar8 != '\0') {
    return;
  }
  plVar5 = (int64_t *)this_ptr[7];
  uVar7 = (uint)bVar1;
  uVar6 = (uint)bVar1;
  if (plVar5 == (int64_t *)0x0) {
    bVar1 = *(byte *)(this_ptr + 2);
    if (uVar6 != 0) {
      if (6 < (uint64_t)uVar7 - 1) {
        uVar3 = 0;
        do {
          ___bzero();
          ___bzero();
          ___bzero();
          ___bzero();
          ___bzero();
          ___bzero();
          ___bzero();
          ___bzero();
          uVar3 = uVar3 + 8;
        } while ((uVar7 & 0xfffffff8) != uVar3);
      }
      if ((uint64_t)(uVar7 & 7) != 0) {
        uVar3 = 0;
        do {
          ___bzero();
          uVar3 = uVar3 + 1;
        } while ((uVar7 & 7) != uVar3);
      }
    }
    uVar7 = (uint)bVar1;
    if (uVar7 != 0) {
      if (6 < (uint64_t)bVar1 - 1) {
        uVar3 = 0;
        do {
          ___bzero();
          ___bzero();
          ___bzero();
          ___bzero();
          ___bzero();
          ___bzero();
          ___bzero();
          ___bzero();
          uVar3 = uVar3 + 8;
        } while ((uVar7 & 0xfffffff8) != uVar3);
      }
      if ((uint64_t)(uVar7 & 7) != 0) {
        uVar3 = 0;
        do {
          ___bzero();
          uVar3 = uVar3 + 1;
        } while ((uVar7 & 7) != uVar3);
      }
    }
  }
  else {
    if (uVar7 != 0) {
      if (6 < (uint64_t)uVar6 - 1) {
        uVar3 = 0;
        do {
          ___bzero();
          ___bzero();
          ___bzero();
          ___bzero();
          ___bzero();
          ___bzero();
          ___bzero();
          ___bzero();
          uVar3 = uVar3 + 8;
        } while ((uVar6 & 0xfffffff8) != uVar3);
      }
      if ((uint64_t)(uVar6 & 7) != 0) {
        uVar3 = 0;
        do {
          ___bzero();
          uVar3 = uVar3 + 1;
        } while ((uVar6 & 7) != uVar3);
      }
      plVar5 = (int64_t *)this_ptr[7];
    }
    (**(code **)(*plVar5 + 0x538))();
  }
                                          (**(code **)(*this_ptr + 0x400))(param_2);
  return;
}

