// Function: FUN_009fbfb8
// Address: 009fbfb8
// Size: 544 bytes
// Class: Unknown

uint16_t FUN_009fbfb8(uint param_1,byte *param_2,char *param_3)

{
  byte bVar1;
  int64_t *plVar2;
  code *pcVar3;
  char cVar4;
  int iVar5;
  uint64_t uVar6;
  bad_cast *this;
  int64_t *arg1;
  int64_t *this_ptr;
  uint16_t uVar7;
  int64_t *plVar8;
  uint uVar9;
  bool bVar10;
  
  for (uVar9 = param_1; uVar9 != 0; uVar9 = uVar9 - 1) {
    plVar8 = (int64_t *)*this_ptr;
    if (plVar8 == (int64_t *)0x0) {
LAB_009fc014:
      plVar8 = (int64_t *)0x0;
    }
    else if (plVar8[3] == plVar8[4]) {
      iVar5 = (**(code **)(*plVar8 + 0x48))();
      if (iVar5 == -1) {
        *this_ptr = 0;
        goto LAB_009fc014;
      }
      plVar8 = (int64_t *)*this_ptr;
    }
    plVar2 = (int64_t *)*arg1;
    if (plVar2 == (int64_t *)0x0) {
LAB_009fc066:
      bVar10 = plVar8 == (int64_t *)0x0;
LAB_009fc069:
      if (bVar10) break;
    }
    else {
      if (plVar2[3] == plVar2[4]) {
        iVar5 = (**(code **)(*plVar2 + 0x48))();
        if (iVar5 == -1) {
          *arg1 = 0;
          goto LAB_009fc066;
        }
        bVar10 = (plVar8 == (int64_t *)0x0) == (*arg1 == 0);
        goto LAB_009fc069;
      }
      if (plVar8 != (int64_t *)0x0) break;
    }
    plVar8 = (int64_t *)*this_ptr;
    if ((char *)plVar8[3] == (char *)plVar8[4]) {
      cVar4 = (**(code **)(*plVar8 + 0x48))();
    }
    else {
      cVar4 = *(char *)plVar8[3];
    }
    if ((0xff < (uint)(int)cVar4) ||
       ((PTR___DefaultRuneLocale_0249c238[(uint64_t)(uint)(int)cVar4 * 4 + 0x3d] & 4) == 0)) {
      plVar8 = (int64_t *)*this_ptr;
      if ((char *)plVar8[3] == (char *)plVar8[4]) {
        cVar4 = (**(code **)(*plVar8 + 0x48))();
      }
      else {
        cVar4 = *(char *)plVar8[3];
      }
      if (*param_3 != cVar4) break;
    }
    plVar8 = (int64_t *)*this_ptr;
    if ((char *)plVar8[3] == (char *)plVar8[4]) {
      cVar4 = (**(code **)(*plVar8 + 0x48))();
    }
    else {
      cVar4 = *(char *)plVar8[3];
    }
    if ((*param_3 != cVar4) && (plVar8 = (int64_t *)*this_ptr, plVar8[3] == plVar8[4])) {
      (**(code **)(*plVar8 + 0x48))();
    }
    std::string::push_back(cVar4);
    plVar8 = (int64_t *)*this_ptr;
    if (plVar8[3] == plVar8[4]) {
      (**(code **)(*plVar8 + 0x50))();
    }
    else {
      plVar8[3] = plVar8[3] + 1;
    }
  }
  bVar1 = *param_2;
  if ((bVar1 & 1) == 0) {
    uVar6 = (uint64_t)(bVar1 >> 1);
  }
  else {
    uVar6 = *(uint64_t *)(param_2 + 8);
  }
  uVar7 = 0xffff;
  if (param_1 <= uVar6) {
    this = (bad_cast *)(param_2 + 1);
    if ((bVar1 & 1) != 0) {
      this = *(bad_cast **)(param_2 + 0x10);
    }
    cVar4 = FUN_009f5cb8();
    if (cVar4 == '\0') {
      std::bad_cast::bad_cast(this);
      FUN_009af240();
                          pcVar3 = invalidInstructionException();
      (*pcVar3)();
    }
    uVar7 = 0;
  }
  return uVar7;
}

