// Function: FUN_00dd8370
// Address: 00dd8370
// Size: 614 bytes
// Class: GNValue

uint64_t FUN_00dd8370(void)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int64_t lVar4;
  int64_t lVar5;
  int64_t lVar6;
  int64_t lVar7;
  int64_t lVar8;
  char cVar9;
  int iVar10;
  uint uVar11;
  int64_t *this_ptr;
  uint64_t uVar12;
  
  if ((*this_ptr == 0) || (iVar10 = FUN_00d8c7a0(), iVar10 == 0)) {
    uVar12 = 0;
  }
  else {
    uVar12 = 0;
    cVar9 = FUN_00d8ca70();
    lVar2 = g_02784098;
    if (cVar9 == '(') {
      lVar1 = *this_ptr;
      if (g_02784098 != 0) {
        FUN_00d50b00();
      }
      cVar9 = FUN_00d90870();
      lVar3 = g_027840a0;
      uVar12 = CONCAT71((int7)((uint64_t)lVar1 >> 8),1);
      if (cVar9 == '\0') {
        lVar1 = *this_ptr;
        if (g_027840a0 != 0) {
          FUN_00d50b00();
        }
        cVar9 = FUN_00d90870();
        lVar4 = g_027840a8;
        uVar12 = CONCAT71((int7)((uint64_t)lVar1 >> 8),1);
        if (cVar9 == '\0') {
          lVar1 = *this_ptr;
          if (g_027840a8 != 0) {
            FUN_00d50b00();
          }
          cVar9 = FUN_00d90870();
          lVar5 = g_027840b0;
          uVar12 = CONCAT71((int7)((uint64_t)lVar1 >> 8),1);
          if (cVar9 == '\0') {
            lVar1 = *this_ptr;
            if (g_027840b0 != 0) {
              FUN_00d50b00();
            }
            cVar9 = FUN_00d90870();
            lVar6 = g_027840b8;
            uVar12 = CONCAT71((int7)((uint64_t)lVar1 >> 8),1);
            if (cVar9 == '\0') {
              lVar1 = *this_ptr;
              if (g_027840b8 != 0) {
                FUN_00d50b00();
              }
              cVar9 = FUN_00d90870();
              lVar7 = g_027840c0;
              uVar12 = CONCAT71((int7)((uint64_t)lVar1 >> 8),1);
              if (cVar9 == '\0') {
                lVar1 = *this_ptr;
                if (g_027840c0 != 0) {
                  FUN_00d50b00();
                }
                cVar9 = FUN_00d90870();
                lVar8 = g_027840c8;
                uVar12 = CONCAT71((int7)((uint64_t)lVar1 >> 8),1);
                if (cVar9 == '\0') {
                  if (g_027840c8 != 0) {
                    FUN_00d50b00();
                  }
                  uVar11 = FUN_00d90870();
                  uVar12 = (uint64_t)uVar11;
                  if (lVar8 != 0) {
                    FUN_00d50b20();
                  }
                }
                if (lVar7 != 0) {
                  FUN_00d50b20();
                }
              }
              if (lVar6 != 0) {
                FUN_00d50b20();
              }
            }
            if (lVar5 != 0) {
              FUN_00d50b20();
            }
          }
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
        }
        if (lVar3 != 0) {
          FUN_00d50b20();
        }
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
    }
  }
  return uVar12 & 0xffffffff;
}

