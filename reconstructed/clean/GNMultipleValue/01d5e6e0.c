// Function: FUN_01d5e6e0
// Address: 01d5e6e0
// Size: 769 bytes
// Class: GNMultipleValue

int64_t * FUN_01d5e6e0(uint64_t param_1,int64_t *param_2)

{
  int64_t *plVar1;
  bool bVar2;
  bool bVar3;
  char cVar4;
  int64_t lVar5;
  int64_t arg1;
  int64_t *this_ptr;
  int64_t lVar6;
  uint uVar7;
  int64_t local_80;
  char local_78;
  uint64_t local_70;
  int64_t local_48;
  char local_40;
  
  if (*param_2 != 0) {
    lVar5 = *(int64_t *)(arg1 + 0x18);
    uVar7 = *(uint *)(lVar5 + 0xc);
    local_70 = (uint64_t)uVar7;
    if (0 < (int)uVar7) {
      lVar6 = 0;
      bVar2 = false;
      do {
        uVar7 = uVar7 - 1;
        lVar5 = *(int64_t *)(*(int64_t *)(lVar5 + 0x10) + (uint64_t)uVar7 * 8);
        if (lVar6 == lVar5) {
          lVar5 = lVar6;
          bVar3 = bVar2;
          if ((!bVar2) && (lVar6 != 0)) {
            FUN_00d50b00();
            bVar3 = true;
          }
        }
        else {
          if (lVar5 != 0) {
            FUN_00d50b00();
          }
          bVar3 = true;
          if ((bVar2) && (lVar6 != 0)) {
            FUN_00d50b20();
          }
        }
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
          if ((!bVar3) && (lVar5 != 0)) {
            FUN_00d50b00();
          }
          goto LAB_01d5e9e7;
        }
        cVar4 = FUN_01d64c70();
        lVar6 = lVar5;
        bVar2 = bVar3;
        if (cVar4 != '\0') {
          FUN_01d64cb0();
          FUN_01d5e6e0();
          if (local_48 == lVar5) {
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
            if ((!bVar3) || (lVar5 == 0)) goto LAB_01d5e918;
            FUN_00d50b20();
            lVar5 = local_48;
            bVar3 = true;
          }
          else if ((bVar3) && (lVar5 != 0)) {
            FUN_00d50b20();
            lVar5 = local_48;
            bVar3 = true;
          }
          else {
LAB_01d5e918:
            lVar5 = local_48;
            bVar3 = true;
          }
          if ((local_78 != '\0') && (local_80 != 0)) {
            FUN_00d50b20();
          }
          if (lVar5 != 0) {
            *(void*)(this_ptr + 1) = 0;
            if (!bVar3) {
              FUN_00d50b00();
            }
LAB_01d5e9e7:
            *this_ptr = lVar5;
            *(void*)(this_ptr + 1) = 1;
            return this_ptr;
          }
          lVar6 = 0;
          bVar2 = bVar3;
        }
        if ((int64_t)local_70 < 2) {
          *(void*)(this_ptr + 1) = 0;
          *this_ptr = 0;
          if (!bVar2) {
            return this_ptr;
          }
          if (lVar6 == 0) {
            return this_ptr;
          }
          FUN_00d50b20();
          return this_ptr;
        }
        local_70 = local_70 - 1;
        lVar5 = *(int64_t *)(arg1 + 0x18);
      } while( true );
    }
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  return this_ptr;
}

