// Function: FUN_00dfd950
// Address: 00dfd950
// Size: 1100 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void* FUN_00dfd950(int param_1,int64_t *param_2)

{
  int64_t lVar1;
  int64_t lVar2;
  int64_t lVar3;
  int iVar4;
  char *pcVar5;
  int64_t arg1;
  void*this_ptr;
  int64_t lVar6;
  bool bVar7;
  uint64_t local_110;
  uint8_t local_108;
  uint64_t local_100;
  uint8_t local_f8;
  int64_t local_f0;
  uint64_t local_e8;
  uint32_t local_e0;
  int64_t local_d8;
  char local_d0;
  int64_t local_c8;
  char local_c0;
  int64_t local_80;
  char local_78;
  int64_t local_70;
  char local_68;
  int64_t local_60;
  char local_58;
  int64_t local_50;
  int64_t local_48;
  char local_40 [8];
  char local_38 [8];
  
  if ((*(int64_t *)(arg1 + 0x40) != 0) && (lVar1 = *param_2, lVar1 != 0)) {
    local_f8 = 0;
    local_100 = 0;
    local_e0 = 0;
    local_e8 = 0;
    local_f0 = lVar1;
    if (0 < *(int *)(lVar1 + 0xc)) {
      lVar6 = 0;
      do {
        local_100 = *(void*)(*(int64_t *)(lVar1 + 0x10) + lVar6 * 8);
        FUN_00d25fa0();
        local_50 = local_48;
        if (local_40[0] == '\0') {
          if (((local_48 != 0) && (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_40[0] = '\0';
        }
        if (local_50 != 0) {
          iVar4 = FUN_00d28390();
          if (iVar4 == param_1) {
            local_68 = 0;
            FUN_00d50b00();
            local_68 = '\x01';
            local_70 = arg1;
            FUN_00e19720(g_02394dd8,0);
            lVar2 = local_48;
            if (local_40[0] == '\0') {
              if (((local_48 != 0) && (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_40[0] = '\0';
            }
            if ((local_68 != '\0') && (local_70 != 0)) {
              FUN_00d50b20();
            }
            FUN_00e34260();
            FUN_00e19880();
            if (local_d8 == 0) {
              bVar7 = false;
            }
            else {
              FUN_00e19880();
              FUN_00c9fe20();
              lVar3 = local_48;
              local_38[0] = local_40[0];
              pcVar5 = local_40;
              if (local_40[0] == '\0') {
                pcVar5 = local_38;
              }
              *pcVar5 = '\0';
              if ((local_40[0] != '\0') && (local_48 != 0)) {
                FUN_00d50b20();
              }
              bVar7 = *(int *)(lVar3 + 0xc) != 0;
              if ((local_38[0] != '\0') && (lVar3 != 0)) {
                FUN_00d50b20();
              }
              if ((local_c0 != '\0') && (local_c8 != 0)) {
                FUN_00d50b20();
              }
            }
            if ((local_d0 != '\0') && (local_d8 != 0)) {
              FUN_00d50b20();
            }
            if (bVar7) {
              FUN_00e19880();
              local_60 = local_48;
              local_58 = 0;
              if (local_40[0] == '\0') {
                if (local_48 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_40[0] = '\0';
              }
              local_58 = '\x01';
              FUN_00e63050();
              if ((local_58 != '\0') && (local_60 != 0)) {
                FUN_00d50b20();
              }
              if ((local_40[0] != '\0') && (local_48 != 0)) {
                FUN_00d50b20();
              }
              FUN_00e19880();
              local_80 = local_48;
              if (local_40[0] == '\0') {
                if (local_48 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_40[0] = '\0';
              }
              local_78 = '\x01';
              local_108 = 0;
              local_110 = 0;
              FUN_00dfe080(&local_110,&local_80);
              if ((local_78 != '\0') && (local_80 != 0)) {
                FUN_00d50b20();
              }
              if ((local_40[0] != '\0') && (local_48 != 0)) {
                FUN_00d50b20();
              }
              if (lVar2 != 0) {
                FUN_00d50b20();
              }
              FUN_00d50b20();
              FUN_00018280();
              return this_ptr;
            }
            if (lVar2 != 0) {
              FUN_00d50b20();
            }
          }
          FUN_00d50b20();
        }
        lVar6 = lVar6 + 1;
        local_e8 = CONCAT44(local_e8._4_4_,(int)lVar6);
      } while ((int)lVar6 < *(int *)(lVar1 + 0xc));
    }
    FUN_00018280();
  }
  *(void*)(this_ptr + 1) = 0;
  *this_ptr = 0;
  return this_ptr;
}

