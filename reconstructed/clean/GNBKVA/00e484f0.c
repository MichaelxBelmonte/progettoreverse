// Function: FUN_00e484f0
// Address: 00e484f0
// Size: 1072 bytes
// Class: GNBKVA
// String references:
//   "object tried to encode key more than once!"

void FUN_00e484f0(uint64_t param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int iVar6;
  void*puVar7;
  int64_t lVar8;
  char unaff_SIL;
  int64_t this_ptr;
  int iVar9;
  
  FUN_00e3a1c0();
  if (*(char *)(this_ptr + 0x2c) == '\0') {
    lVar8 = *(int64_t *)(this_ptr + 0x60);
  }
  else {
    lVar8 = *(int64_t *)(this_ptr + 0x48);
  }
  bVar3 = lVar8 == 0;
  if (bVar3) {
    lVar8 = 0;
  }
  else {
    FUN_00d50b00();
  }
  lVar1 = *param_2;
  iVar5 = FUN_00e3a2a0();
  iVar9 = 0;
  do {
    iVar6 = FUN_00d795b0();
    if (iVar6 <= iVar9) {
      puVar7 = (void*)FUN_00e8fc40();
      FUN_00d4ff40();
      *puVar7 = &g_0258e990;
      *(void*)((int64_t)puVar7 + 0xc) = 0;
      *(void*)(puVar7 + 2) = 0;
      *(void*)((int64_t)puVar7 + 0x14) = 0;
      (*g_0258e9a8)();
      FUN_00e5d270();
      FUN_00d795e0();
      FUN_00d50b20();
LAB_00e48735:
      if (!bVar3 && lVar8 != 0) {
        FUN_00d50b20();
      }
      return;
    }
    FUN_00d79670();
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    iVar6 = FUN_00e5d8b0();
    lVar2 = g_027816e8;
    if (iVar6 == iVar5) {
      if (*(char *)(this_ptr + 0x2c) != '\0') {
        cVar4 = FUN_00e5d8c0();
        if (cVar4 == unaff_SIL) {
          FUN_00e5d8d0();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
        }
        else {
          lVar2 = *(int64_t *)(this_ptr + 0x40);
          if (lVar2 != 0) {
            FUN_00d50b00();
          }
          FUN_00e47c30();
          if (lVar1 != 0) {
            FUN_00d50b00();
          }
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          if (lVar1 == 0) {
            FUN_00c8e710();
            FUN_00c92170();
            FUN_00c92160();
            lVar2 = *(int64_t *)(this_ptr + 0x40);
            if (lVar2 != 0) {
              FUN_00d50b00();
            }
            FUN_00e48c30();
            if (lVar2 != 0) {
              FUN_00d50b20();
            }
          }
          iVar9 = *(int *)(lVar1 + 0x18);
          FUN_00c8e340();
          *(int *)(*(int64_t *)(lVar1 + 0x10) + (int64_t)iVar9) = iVar5;
          FUN_00d50b20();
          if (lVar1 != 0) {
            FUN_00d50b20();
          }
        }
        goto LAB_00e48735;
      }
      if (g_027816e8 != 0) {
        FUN_00d50b00();
      }
      FUN_00cc7b40();
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
    if (lVar1 != 0) {
      FUN_00d50b20();
    }
    iVar9 = iVar9 + 1;
  } while( true );
}

