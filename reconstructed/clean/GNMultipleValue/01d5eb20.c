// Function: FUN_01d5eb20
// Address: 01d5eb20
// Size: 784 bytes
// Class: GNMultipleValue

int64_t * FUN_01d5eb20(int param_1,int64_t *param_2)

{
  int64_t *plVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int iVar5;
  int64_t lVar6;
  uint uVar7;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t lVar8;
  uint64_t uVar9;
  int64_t local_a0;
  uint8_t local_98;
  int64_t local_88;
  char local_80;
  int64_t local_48;
  char local_40;
  
  if (*param_2 != 0) {
    lVar6 = *(int64_t *)(arg1 + 0x18);
    uVar7 = *(uint *)(lVar6 + 0xc);
    uVar9 = (uint64_t)uVar7;
    if (0 < (int)uVar7) {
      lVar8 = 0;
      bVar2 = false;
      do {
        uVar7 = uVar7 - 1;
        lVar6 = *(int64_t *)(*(int64_t *)(lVar6 + 0x10) + (uint64_t)uVar7 * 8);
        if (lVar8 == lVar6) {
          lVar6 = lVar8;
          bVar3 = bVar2;
          if ((!bVar2) && (lVar8 != 0)) {
            FUN_00d50b00();
            bVar3 = true;
          }
        }
        else {
          if (lVar6 != 0) {
            FUN_00d50b00();
          }
          bVar3 = true;
          if ((bVar2) && (lVar8 != 0)) {
            FUN_00d50b20();
          }
        }
        iVar5 = FUN_01d654a0();
        if (iVar5 == param_1) {
          plVar1 = (int64_t *)*param_2;
          FUN_01d65460();
          if (local_40 == '\0') {
            if (local_48 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_40 = '\0';
          }
          cVar4 = (**(code **)(*plVar1 + 0x50))();
          if (local_48 != 0) {
            FUN_00d50b20();
          }
          if ((local_40 != '\0') && (local_48 != 0)) {
            FUN_00d50b20();
          }
          if (cVar4 != '\0') {
            *(void*)(this_ptr + 1) = 0;
            if ((!bVar3) && (lVar6 != 0)) {
              FUN_00d50b00();
            }
            goto LAB_01d5ee26;
          }
        }
        cVar4 = FUN_01d64c70();
        lVar8 = lVar6;
        bVar2 = bVar3;
        if (cVar4 != '\0') {
          FUN_01d64cb0();
          local_a0 = *param_2;
          local_98 = 0;
          FUN_01d5eb20(param_1,&local_a0);
          if (local_48 == lVar6) {
            if ((bVar3) || (local_48 == 0)) {
              if ((local_40 != '\0') && (local_48 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              bVar3 = true;
              if (local_40 == '\0') {
                FUN_00d50b00();
              }
            }
          }
          else if (local_40 == '\0') {
            if (local_48 != 0) {
              FUN_00d50b00();
            }
            if ((!bVar3) || (lVar6 == 0)) goto LAB_01d5ed5f;
            FUN_00d50b20();
            lVar6 = local_48;
            bVar3 = true;
          }
          else if ((bVar3) && (lVar6 != 0)) {
            FUN_00d50b20();
            lVar6 = local_48;
            bVar3 = true;
          }
          else {
LAB_01d5ed5f:
            lVar6 = local_48;
            bVar3 = true;
          }
          if ((local_80 != '\0') && (local_88 != 0)) {
            FUN_00d50b20();
          }
          if (lVar6 != 0) {
            *(void*)(this_ptr + 1) = 0;
            if (!bVar3) {
              FUN_00d50b00();
            }
LAB_01d5ee26:
            *this_ptr = lVar6;
            *(void*)(this_ptr + 1) = 1;
            return this_ptr;
          }
          lVar8 = 0;
          bVar2 = bVar3;
        }
        if ((int64_t)uVar9 < 2) {
          *(void*)(this_ptr + 1) = 0;
          *this_ptr = 0;
          if (!bVar2) {
            return this_ptr;
          }
          if (lVar8 == 0) {
            return this_ptr;
          }
          FUN_00d50b20();
          return this_ptr;
        }
        uVar9 = uVar9 - 1;
        lVar6 = *(int64_t *)(arg1 + 0x18);
      } while( true );
    }
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  return this_ptr;
}

