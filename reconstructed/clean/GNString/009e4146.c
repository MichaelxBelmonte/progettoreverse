// Function: FUN_009e4146
// Address: 009e4146
// Size: 712 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


uint64_t FUN_009e4146(void)

{
  uint8_t uVar1;
  int iVar2;
  int *piVar3;
  int64_t *plVar4;
  uint64_t uVar5;
  byte bVar6;
  char cVar7;
  uint uVar8;
  void*puVar9;
  void*puVar10;
  int64_t lVar11;
  uint64_t uVar12;
  uint64_t uVar13;
  uint64_t uVar14;
  uint64_t uVar15;
  int64_t this_ptr;
  
  lVar11 = *(int64_t *)(this_ptr + 0x58);
  iVar2 = *(int *)(lVar11 + 0x10);
  *(void*)(this_ptr + 0x78) = *(void*)(lVar11 + 0x14);
  uVar14 = (uint64_t)(iVar2 + 5U);
  if (iVar2 + 5U < 6) {
    uVar13 = (int64_t)&switchD_009e4184::switchdataD_009e44f8 +
             (int64_t)(int)(&switchD_009e4184::switchdataD_009e44f8)[uVar14];
    switch(uVar14) {
    case 0:
      puVar9 = (void*)FUN_009e2686();
      puVar10 = (void*)(*(int64_t *)(this_ptr + 0xd8) + -0x28);
      if (puVar10 < *(void**)(this_ptr + 0xd0)) {
        FUN_009e5df8();
        puVar10 = (void*)(*(int64_t *)(this_ptr + 0xd8) + -0x28);
      }
      *puVar10 = 1;
      puVar10[2] = 0;
      uVar12 = puVar9[1];
      *(void*)(puVar10 + 4) = *puVar9;
      *(void*)(puVar10 + 6) = uVar12;
      *(void*)(puVar10 + 8) = *(void*)(puVar9 + 2);
      *(void**)(this_ptr + 0xd8) = puVar10;
      plVar4 = *(int64_t **)(this_ptr + 0x10);
      uVar12 = *(void*)(this_ptr + 0x28);
      *(void*)(*plVar4 + 0x30) = uVar12;
      *(void*)(*plVar4 + 0x20) = uVar12;
      lVar11 = *plVar4;
      uVar14 = *(uint64_t *)(lVar11 + 0x18);
      *(bool *)(lVar11 + 0x28) = uVar14 != *(uint64_t *)(lVar11 + 0x20);
      goto LAB_009e435c;
    case 1:
      lVar11 = *(int64_t *)(lVar11 + 8);
      piVar3 = *(int **)(lVar11 + 8);
      *(int **)(this_ptr + 0x58) = piVar3;
      if (*piVar3 == 0x1b) {
        cVar7 = FUN_009e58f2();
        uVar14 = CONCAT71((int7)(uVar13 >> 8),1);
        if (cVar7 == '\0') {
          *(void*)(this_ptr + 0x58) = *(void*)(lVar11 + 0x10);
        }
        goto LAB_009e436a;
      }
      iVar2 = piVar3[4];
      uVar12 = *(void*)(this_ptr + 0x28);
      uVar15 = *(void*)(*(int64_t *)(piVar3 + 2) + 8);
      uVar5 = *(void*)(*(int64_t *)(*(int64_t *)(piVar3 + 2) + 0x10) + 8);
      *(void*)(this_ptr + 0x58) = uVar15;
      bVar6 = FUN_009e3dba();
      *(void*)(this_ptr + 0x28) = uVar12;
      bVar6 = iVar2 == -2 ^ bVar6;
      uVar13 = CONCAT71((int7)((uint64_t)uVar15 >> 8),bVar6);
      if (bVar6 != 0) {
        *(void*)(this_ptr + 0x58) = uVar5;
        break;
      }
      uVar12 = *(void*)(lVar11 + 0x10);
      goto LAB_009e4364;
    case 2:
      uVar1 = *(void*)(this_ptr + 0x7b);
      *(void*)(this_ptr + 0x7b) = 1;
      uVar12 = *(void*)(*(int64_t *)(*(int64_t *)(lVar11 + 8) + 0x10) + 8);
      *(void*)(this_ptr + 0x58) = *(void*)(*(int64_t *)(lVar11 + 8) + 8);
      uVar8 = FUN_009e3dba();
      uVar14 = (uint64_t)uVar8;
      if (((char)uVar8 == '\0') && (*(char *)(this_ptr + 0x7b) == '\0')) {
        do {
          *(void*)(this_ptr + 0xe4) = 0;
          *(void*)(this_ptr + 0xe6) = 0;
          do {
            cVar7 = (**(code **)(&g_02524630 + (uint64_t)**(uint **)(this_ptr + 0xd8) * 0x10))()
            ;
          } while (cVar7 != '\0');
          uVar14 = 0;
        } while (*(int64_t *)(this_ptr + 0x58) != 0);
      }
      else {
        *(void*)(this_ptr + 0x58) = uVar12;
        *(void*)(this_ptr + 0x7b) = uVar1;
      }
      goto LAB_009e436a;
    default:
      uVar12 = *(void*)(*(int64_t *)(*(int64_t *)(lVar11 + 8) + 0x10) + 8);
      *(void*)(this_ptr + 0x58) = *(void*)(*(int64_t *)(lVar11 + 8) + 8);
      puVar10 = (void*)(*(int64_t *)(this_ptr + 0xd8) + -0x20);
      if (puVar10 < *(void**)(this_ptr + 0xd0)) {
        FUN_009e5df8();
        puVar10 = (void*)(*(int64_t *)(this_ptr + 0xd8) + -0x20);
      }
      uVar13 = *(uint64_t *)(this_ptr + 0x28);
      *puVar10 = 3;
      *(void*)(puVar10 + 2) = uVar12;
      *(uint64_t *)(puVar10 + 4) = uVar13;
      *(bool *)(puVar10 + 6) = iVar2 == -1;
      *(void**)(this_ptr + 0xd8) = puVar10;
      break;
    case 5:
      goto switchD_009e4184_caseD_5;
    }
  }
  else {
    if ((*(byte *)(this_ptr + 0x62) & 4) == 0) {
      puVar9 = (void*)FUN_009e2686();
      puVar10 = (void*)(*(int64_t *)(this_ptr + 0xd8) + -0x28);
      if (puVar10 < *(void**)(this_ptr + 0xd0)) {
        FUN_009e5df8();
        puVar10 = (void*)(*(int64_t *)(this_ptr + 0xd8) + -0x28);
      }
      *puVar10 = 1;
      puVar10[2] = iVar2;
      uVar12 = puVar9[1];
      *(void*)(puVar10 + 4) = *puVar9;
      *(void*)(puVar10 + 6) = uVar12;
      *(void*)(puVar10 + 8) = *(void*)(puVar9 + 2);
      *(void**)(this_ptr + 0xd8) = puVar10;
      uVar14 = *(uint64_t *)(this_ptr + 0x28);
      *(uint64_t *)(**(int64_t **)(this_ptr + 0x10) + 0x30 + (int64_t)iVar2 * 0x18) = uVar14;
    }
LAB_009e435c:
    lVar11 = *(int64_t *)(this_ptr + 0x58);
    uVar13 = uVar14;
switchD_009e4184_caseD_5:
    uVar12 = *(void*)(lVar11 + 8);
LAB_009e4364:
    *(void*)(this_ptr + 0x58) = uVar12;
  }
  uVar14 = CONCAT71((int7)(uVar13 >> 8),1);
LAB_009e436a:
  return uVar14 & 0xffffffff;
}

