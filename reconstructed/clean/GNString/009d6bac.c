// Function: FUN_009d6bac
// Address: 009d6bac
// Size: 911 bytes
// Class: GNString
// String references:
//   "Unable to open message catalog: "
// === GNString properties ===
//   bool            _dragEnabled
//   bool            _dropEnabled
//   double          _transferStartTime
//   double          _transferEndTime
//   double          _userStartTime
//   double          _userEndTime


void FUN_009d6bac(uint64_t param_1)

{
  char cVar1;
  uint32_t uVar2;
  runtime_error *this;
  char *pcVar3;
  int64_t lVar4;
  uint64_t uVar5;
  string *psVar6;
  string *psVar7;
  uint64_t uVar8;
  int64_t this_ptr;
  int iVar9;
  int64_t lVar10;
  bool bVar11;
  uint32_t extraout_XMM0_Da;
  int *local_c0;
  int64_t local_b8;
  string local_b0 [8];
  uint64_t local_a8;
  runtime_error *local_98;
  int local_8c;
  uint64_t local_88;
  uint64_t uStack_80;
  uint64_t local_78;
  uint64_t local_70;
  uint64_t local_68;
  int64_t local_60;
  uint64_t local_58;
  uint64_t uStack_50;
  uint64_t local_48;
  uint8_t local_38 [8];
  
  FUN_00acddc0();
  this = (runtime_error *)CONCAT71((int7)((uint64_t)param_1 >> 8),1);
  if (((byte)local_b0[0] & 1) == 0) {
    local_a8 = (uint64_t)((byte)local_b0[0] >> 1);
  }
  if ((local_a8 != 0) && (*(int64_t **)(this_ptr + 0x10) != (int64_t *)0x0)) {
    this = (runtime_error *)(**(code **)(**(int64_t **)(this_ptr + 0x10) + 0x18))();
    if ((int)this < 0) {
      FUN_009d5ed0();
      psVar6 = local_b0;
      FUN_009d6fc0();
      std::runtime_error::runtime_error(this,psVar6);
      if (((uint64_t)local_70 & 1) != 0) {
        operator_delete(this);
      }
      FUN_00acdf60();
      std::runtime_error::~runtime_error(this);
      if ((local_58 & 1) != 0) {
        operator_delete(this);
      }
    }
    else {
      local_b8 = this_ptr + 0x120;
      iVar9 = 0;
      local_98 = this;
      do {
        pcVar3 = (char *)FUN_00acf6f0();
        local_58 = 0;
        uStack_50 = 0;
        local_48 = 0;
        cVar1 = *pcVar3;
        while (cVar1 != '\0') {
          pcVar3 = pcVar3 + 1;
          lVar10 = **(int64_t **)(this_ptr + 8);
          cVar1 = (**(code **)(lVar10 + 0x38))();
          std::string::append((ulong)lVar10,cVar1);
          cVar1 = *pcVar3;
        }
        (**(code **)(**(int64_t **)(this_ptr + 0x10) + 0x20))(0,local_98,iVar9 + 200,&local_58);
        local_88 = 0;
        uStack_80 = 0;
        local_78 = 0;
        bVar11 = ((uint64_t)local_70 & 1) == 0;
        uVar8 = local_68;
        if (bVar11) {
          uVar8 = (uint64_t)local_70 >> 1 & 0x7f;
        }
        if (uVar8 != 0) {
          uVar8 = 0;
          do {
            lVar10 = (int64_t)&local_70 + 1;
            if (!bVar11) {
              lVar10 = local_60;
            }
            cVar1 = (**(code **)(**(int64_t **)(this_ptr + 8) + 0x48))(lVar10,0);
            std::string::append((ulong)lVar10,cVar1);
            uVar8 = uVar8 + 1;
            bVar11 = ((uint64_t)local_70 & 1) == 0;
            uVar5 = local_68;
            if (bVar11) {
              uVar5 = (uint64_t)local_70 >> 1 & 0x7f;
            }
          } while (uVar8 < uVar5);
        }
        local_c0 = &local_8c;
        psVar7 = (string *)&g_023ceda0;
        psVar6 = (string *)&local_c0;
        local_8c = iVar9;
        FUN_009d7348(psVar6,&g_023ceda0,local_38);
        std::string::operator=(psVar6,psVar7);
        if ((local_88 & 1) != 0) {
          operator_delete(psVar6);
        }
        if (((uint64_t)local_70 & 1) != 0) {
          operator_delete(psVar6);
        }
        if ((local_58 & 1) != 0) {
          operator_delete(psVar6);
        }
        iVar9 = iVar9 + 1;
      } while (iVar9 != 0x16);
      if ((g_02753c60 == '\0') && (iVar9 = ___cxa_guard_acquire(), iVar9 != 0)) {
        g_02753c58 = 0;
        g_02753c50 = 0;
        g_02753c48 = 0;
        ___cxa_atexit(extraout_XMM0_Da,0);
        ___cxa_guard_release();
      }
      iVar9 = 300;
      lVar10 = 0;
      do {
        (**(code **)(**(int64_t **)(this_ptr + 0x10) + 0x20))(0,local_98,iVar9,&g_02753c48);
        this = (runtime_error *)(uint64_t)((byte)local_58 & 1);
        uVar8 = uStack_50;
        if ((local_58 & 1) == 0) {
          uVar8 = (uint64_t)((byte)local_58 >> 1);
        }
        if (uVar8 != 0) {
          local_70 = &local_58;
          lVar4 = FUN_009d73f4(&local_70,&g_023ceda0,&local_88);
          uVar2 = *(void*)((int64_t)&g_023ced60 + lVar10);
          *(void*)(lVar4 + 0x38) = uVar2;
          this = (runtime_error *)
                 ((uint64_t)CONCAT31((int3)((uint)uVar2 >> 8),(byte)local_58) & 0xffffffffffffff01)
          ;
        }
        if ((char)this != '\0') {
          operator_delete(this);
        }
        iVar9 = iVar9 + 1;
        lVar10 = lVar10 + 4;
      } while (lVar10 != 0x38);
    }
  }
  uVar2 = FUN_009d70d8();
  *(void*)(this_ptr + 0x168) = uVar2;
  if (((byte)local_b0[0] & 1) != 0) {
    operator_delete(this);
  }
  return;
}

