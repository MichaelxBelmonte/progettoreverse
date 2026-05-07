// Function: FUN_00ab9278
// Address: 00ab9278
// Size: 543 bytes
// Class: OsSignatureMac

void FUN_00ab9278(int64_t *param_1,string *param_2)

{
  uint64_t uVar1;
  int iVar2;
  int64_t lVar3;
  string *this;
  string *psVar4;
  int iVar5;
  uint64_t uVar6;
  char unaff_SIL;
  ushort uStack_86;
  uint64_t local_78 [3];
  uint64_t *local_60;
  uint64_t local_58 [3];
  uint8_t local_40 [16];
  
  psVar4 = param_2;
  FUN_0097ffec();
  param_1[2] = 0;
  *param_1 = (int64_t)(param_1 + 1);
  param_1[1] = 0;
  this = (string *)local_78;
  local_78[2] = 0;
  local_78[1] = 0;
  local_78[0] = 0;
  if (unaff_SIL == '\0') {
    if (param_2 != (string *)0x0) {
      uVar6 = *(uint64_t *)param_2;
      uVar1 = *(uint64_t *)(param_2 + 8);
      if (uVar6 != uVar1) {
        do {
          FUN_00abeec2();
          this = (string *)0x0;
          lVar3 = FUN_00ac162c(0,0,0);
          if (lVar3 != 0) {
            psVar4 = (string *)&g_023d3e9b;
            local_58[0] = uVar6;
            lVar3 = FUN_00abc058(local_58);
            *(void*)(lVar3 + 0x40) = 0xffffffff;
            this = (string *)CONCAT44(0xffffffff,(uint)uStack_86 << 0x10);
            *(string **)(lVar3 + 0x38) = this;
            std::string::operator=(this,psVar4);
          }
          uVar6 = uVar6 + 0x18;
        } while (uVar1 != uVar6);
        goto LAB_00ab9479;
      }
    }
    FUN_008d6858();
    std::string::string(this,psVar4);
    FUN_00abeec2();
    this = (string *)0x0;
    lVar3 = FUN_00ac162c(0,0,0);
    if (lVar3 != 0) {
      psVar4 = (string *)&g_023d3e9b;
      local_60 = local_58;
      lVar3 = FUN_00abc058(&local_60,&g_023d3e9b,local_40);
      *(void*)(lVar3 + 0x40) = 0xffffffff;
      this = (string *)((uint64_t)CONCAT42(0xffffffff,uStack_86) << 0x10);
      *(string **)(lVar3 + 0x38) = this;
      std::string::operator=(this,psVar4);
    }
    if ((local_58[0] & 1) != 0) {
      operator_delete(this);
    }
  }
  else {
    FUN_00ab6e4a();
    iVar2 = FUN_00ac13fc();
    if (iVar2 != 0) {
      iVar5 = 0;
      do {
        FUN_00ac1416(local_40,0,0,0);
        FUN_00abed81();
        psVar4 = (string *)&g_023d3e9b;
        local_60 = local_58;
        lVar3 = FUN_00abc058(&local_60);
        *(void*)(lVar3 + 0x40) = 0xffffffff;
        this = (string *)CONCAT44(0xffffffff,(uint)uStack_86 << 0x10);
        *(string **)(lVar3 + 0x38) = this;
        std::string::operator=(this,psVar4);
        if ((local_58[0] & 1) != 0) {
          operator_delete(this);
        }
        iVar5 = iVar5 + 1;
      } while (iVar2 != iVar5);
    }
  }
LAB_00ab9479:
  if ((local_78[0] & 1) != 0) {
    operator_delete(this);
  }
  return;
}

