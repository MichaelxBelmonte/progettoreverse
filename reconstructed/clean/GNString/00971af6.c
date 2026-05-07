// Function: FUN_00971af6
// Address: 00971af6
// Size: 772 bytes
// Class: GNString
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


int FUN_00971af6(int64_t param_1,int64_t param_2)

{
  int64_t lVar1;
  char cVar2;
  int iVar3;
  int64_t arg1;
  int64_t this_ptr;
  int iVar4;
  uint8_t local_280 [200];
  int local_1b8 [64];
  uint8_t local_b8 [56];
  uint8_t local_80 [56];
  int64_t local_48;
  int64_t local_40;
  int64_t local_38;
  
  iVar4 = 99;
  if ((((this_ptr != 0) && (arg1 != 0)) && (param_2 != 0)) &&
     ((param_1 != 0 && (iVar4 = *(int *)(this_ptr + 0x2e8), iVar4 == 0)))) {
    FUN_0096dfbe();
    FUN_0096dfbe();
    FUN_0096dfbe();
    FUN_00971584();
    FUN_00971584();
    iVar3 = FUN_0096e05d();
    iVar4 = 0x6a;
    if (iVar3 != 0) {
      local_48 = param_1 + 0x38;
      iVar3 = FUN_0096e05d();
      if (iVar3 != 0) {
        local_40 = this_ptr + 0xb0;
        iVar3 = FUN_00969df5();
        if (((iVar3 < 0) && (iVar3 = FUN_00969df5(), iVar3 < 0)) &&
           (iVar4 = *(int *)(this_ptr + 0x2e8), iVar4 == 0)) {
          local_38 = this_ptr + 0x180;
          cVar2 = FUN_0096a284(0,arg1 + 0x38,local_1b8);
          lVar1 = local_40;
          iVar4 = 0x69;
          if (cVar2 != '\0') {
            FUN_0096d3b2(local_80,local_40,local_80,local_80);
            FUN_00969150(local_80,local_80,lVar1,lVar1);
            FUN_00969150(local_80,local_80,lVar1,lVar1);
            if (*(int *)(this_ptr + 0x178) == 0) {
              if (*(int *)(this_ptr + 0x2e8) != 0) {
                return *(int *)(this_ptr + 0x2e8);
              }
              cVar2 = FUN_0096a284(0,this_ptr + 0x120,local_280);
              if (cVar2 == '\0') {
                return 0x69;
              }
              FUN_0096b5d7(local_b8,local_1b8,local_280,local_280);
            }
            else {
              FUN_0096ba8a(local_b8,local_b8,local_80);
              if (*(int *)(this_ptr + 0x2e8) != 0) {
                return *(int *)(this_ptr + 0x2e8);
              }
              cVar2 = FUN_0096a284(0,local_80,local_280);
              if (cVar2 == '\0') {
                return 0x69;
              }
              if (local_1b8[0] != 2) {
                FUN_0096b317(local_1b8,local_1b8);
                if (*(int *)(this_ptr + 0x2e8) != 0) {
                  return *(int *)(this_ptr + 0x2e8);
                }
              }
              FUN_0096acb3();
            }
            FUN_0096a4c9(local_80,local_80);
            iVar4 = *(int *)(this_ptr + 0x2e8);
            if (iVar4 == 0) {
              FUN_00968a1c(local_40,local_40);
              iVar3 = FUN_00969df5();
              iVar4 = 0x6a;
              if (iVar3 == 0) {
                iVar4 = *(int *)(this_ptr + 0x2e8);
              }
            }
          }
        }
      }
    }
  }
  return iVar4;
}

