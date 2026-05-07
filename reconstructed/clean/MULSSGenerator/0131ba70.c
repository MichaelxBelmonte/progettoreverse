// Function: FUN_0131ba70
// Address: 0131ba70
// Size: 512 bytes
// Class: MULSSGenerator

byte FUN_0131ba70(int64_t *param_1,uint64_t param_2,uint8_t param_3,uint8_t param_4)

{
  int64_t lVar1;
  byte bVar2;
  char cVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  void*arg1;
  int64_t this_ptr;
  int64_t lVar7;
  uint64_t local_d8;
  uint8_t local_d0;
  uint64_t local_c8;
  uint8_t local_c0;
  int64_t local_b8;
  uint8_t local_b0;
  uint64_t local_a8;
  uint8_t local_a0;
  uint64_t local_98;
  uint8_t local_90;
  uint64_t local_88;
  uint8_t local_80;
  uint64_t local_78;
  uint8_t local_70;
  int64_t local_68;
  uint64_t local_60;
  uint32_t local_58;
  
  if (this_ptr != 0) {
    FUN_00d50b00();
  }
  local_d8 = *arg1;
  local_d0 = 0;
  bVar2 = FUN_013157a0(param_3,&local_d8,1);
  if (this_ptr != 0) {
    FUN_00d50b20();
  }
  lVar1 = *param_1;
  if (lVar1 != 0) {
    local_70 = 0;
    local_78 = 0;
    local_58 = 0;
    local_60 = 0;
    local_68 = lVar1;
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar7 = 0;
      do {
        local_c8 = *(void*)(*(int64_t *)(lVar1 + 0x10) + lVar7 * 8);
        local_c0 = 0;
        local_78 = local_c8;
        cVar3 = FUN_01316d80();
        if (cVar3 == '\0') {
          bVar2 = 0;
        }
        lVar7 = lVar7 + 1;
        local_60 = CONCAT44(local_60._4_4_,(int)lVar7);
      } while ((int)lVar7 < *(int *)(lVar1 + 0xc));
    }
    FUN_00115e00();
  }
  lVar1 = *(int64_t *)(this_ptr + 0x38);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_b0 = 1;
  local_b8 = lVar1;
  FUN_01317d70();
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  local_a8 = *arg1;
  local_a0 = 0;
  bVar4 = FUN_01319320(param_4,0);
  local_98 = *arg1;
  local_90 = 0;
  bVar5 = FUN_01319960();
  local_88 = *arg1;
  local_80 = 0;
  bVar6 = FUN_0131a710();
  return bVar6 & bVar5 & bVar4 & bVar2;
}

