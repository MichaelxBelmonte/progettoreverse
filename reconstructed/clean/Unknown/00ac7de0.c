// Function: FUN_00ac7de0
// Address: 00ac7de0
// Size: 1217 bytes
// Class: Unknown

uint32_t FUN_00ac7de0(ulong param_1)

{
  uint8_t uVar1;
  byte bVar2;
  uint32_t uVar3;
  int iVar4;
  uint64_t uVar5;
  byte *pbVar6;
  void*puVar7;
  void*arg1;
  byte *this_ptr;
  bool bVar8;
  int local_68;
  int local_60;
  int local_58;
  uint uStack_54;
  byte *local_50;
  uint32_t local_48;
  uint32_t uStack_44;
  uint32_t uStack_40;
  uint32_t uStack_3c;
  byte *local_38;
  
  if ((*this_ptr & 1) == 0) {
    if (*this_ptr >> 1 != 0) {
LAB_00ac7e05:
      FUN_00aca7e0();
      if ((local_48 & 1) == 0) {
        pbVar6 = (byte *)(uint64_t)((byte)local_48 >> 1);
        if (pbVar6 == (byte *)((int64_t)&MACH_HEADER.magic + 1)) goto LAB_00ac7e8b;
LAB_00ac7e23:
        bVar8 = false;
      }
      else {
        pbVar6 = (byte *)CONCAT44(uStack_3c,uStack_40);
        if (pbVar6 != (byte *)((int64_t)&MACH_HEADER.magic + 1)) goto LAB_00ac7e23;
LAB_00ac7e8b:
        if ((local_48 & 1) == 0) {
          pbVar6 = (byte *)((int64_t)&local_48 + 1);
          bVar8 = local_48._1_1_ == '.';
        }
        else {
          bVar8 = *local_38 == 0x2e;
          pbVar6 = local_38;
        }
      }
      if ((local_48 & 1) != 0) {
        operator_delete(pbVar6);
      }
      if (bVar8) {
LAB_00ac7eba:
        FUN_00aca780();
        uVar3 = FUN_00ac7de0();
        goto LAB_00ac8046;
      }
      bVar2 = *this_ptr;
      pbVar6 = (byte *)(uint64_t)bVar2;
      if ((bVar2 & 1) == 0) {
        uVar5 = (uint64_t)(bVar2 >> 1);
      }
      else {
        uVar5 = *(uint64_t *)(this_ptr + 8);
      }
      if (1 < uVar5) {
        if ((bVar2 & 1) == 0) {
          pbVar6 = this_ptr + 1;
          bVar2 = pbVar6[uVar5 - 1];
        }
        else {
          pbVar6 = *(byte **)(this_ptr + 0x10);
          bVar2 = pbVar6[uVar5 - 1];
        }
        if (((bVar2 == 0x2e) && (pbVar6[uVar5 - 2] == 0x2e)) &&
           ((uVar5 == 2 || (pbVar6[uVar5 - 3] == 0x2f)))) goto LAB_00ac7eba;
      }
      local_58 = 0;
      uStack_54 = uStack_54 & 0xffffff00;
      if ((g_02754570 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
        g_02754568 = 0x8fafd21e25c5e09b;
        pbVar6 = &g_02520080;
        g_02754560 = &g_02520080;
        ___cxa_guard_release();
      }
      puVar7 = &g_02754560;
      local_50 = (byte *)&g_02754560;
      FUN_00ac92d0();
      if (local_68 == 3) {
        if (arg1 == (void*)0x0) {
          return 0;
        }
        *(void*)arg1 = 0;
        *(void*)((int64_t)arg1 + 4) = 0;
        if ((g_02754570 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
          g_02754568 = 0x8fafd21e25c5e09b;
          g_02754560 = &g_02520080;
          ___cxa_guard_release();
        }
        goto LAB_00ac7e74;
      }
      uVar3 = FUN_00aca780();
      if ((local_48 & 1) == 0) {
        if ((byte)local_48 >> 1 != 0) goto LAB_00ac7ff3;
      }
      else if (CONCAT44(uStack_3c,uStack_40) != 0) {
LAB_00ac7ff3:
        FUN_00ac92d0(uVar3,&local_58);
        if ((local_60 == 1) && (FUN_00ac7de0(), local_58 != 0)) {
          if (arg1 == (void*)0x0) {
            ___cxa_allocate_exception();
            puVar7 = operator_new((ulong)pbVar6);
            *(void*)((int64_t)puVar7 + 0x1d) = 0x736569726f746365;
            puVar7[3] = 0x7463657269645f65;
            puVar7[2] = 0x74616572633a3a6d;
            puVar7[1] = 0x6574737973656c69;
            *puVar7 = 0x663a3a74736f6f62;
            *(void*)((int64_t)puVar7 + 0x25) = 0;
            uVar3 = FUN_00ac4640(CONCAT44(uStack_54,local_58),&local_48,local_50);
                                ___cxa_throw(uVar3,FUN_00ac46f0);
          }
          arg1[1] = local_50;
          *arg1 = CONCAT44(uStack_54,local_58);
          uVar3 = 0;
          pbVar6 = local_50;
          goto LAB_00ac8046;
        }
      }
      uVar3 = FUN_00ac8330();
LAB_00ac8046:
      if ((local_48 & 1) != 0) {
        operator_delete(pbVar6);
        return uVar3;
      }
      return uVar3;
    }
  }
  else if (*(int64_t *)(this_ptr + 8) != 0) goto LAB_00ac7e05;
  if (arg1 == (void*)0x0) {
    ___cxa_allocate_exception();
    local_38 = operator_new(param_1);
    local_48 = g_023d4f30;
    uStack_44 = _UNK_023d4f34;
    uStack_40 = _UNK_023d4f38;
    uStack_3c = _UNK_023d4f3c;
    *(void*)((int64_t)local_38 + 0x1d) = 0x736569726f746365;
    *(void*)((int64_t)local_38 + 0x18) = 0x7463657269645f65;
    *(void*)((int64_t)local_38 + 0x10) = 0x74616572633a3a6d;
    *(void*)((int64_t)local_38 + 8) = 0x6574737973656c69;
    *(void*)local_38 = 0x663a3a74736f6f62;
    *(void*)((int64_t)local_38 + 0x25) = 0;
    if ((g_02754558 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
      g_02754550 = 0xb2ab117a257edf0d;
      g_02754548 = &g_0251df98;
      ___cxa_guard_release();
    }
    bVar2 = (**(code **)(g_02754548 + 0x30))();
    uVar3 = FUN_00ac4640((uint64_t)bVar2 << 0x20 | 0x16);
                        ___cxa_throw(uVar3,FUN_00ac46f0);
  }
  if ((g_02754558 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    g_02754550 = 0xb2ab117a257edf0d;
    g_02754548 = &g_0251df98;
    ___cxa_guard_release();
  }
  *(void*)arg1 = 0x16;
  puVar7 = &g_02754548;
  uVar1 = (**(code **)(g_02754548 + 0x30))();
  *(void*)((int64_t)arg1 + 4) = uVar1;
LAB_00ac7e74:
  arg1[1] = puVar7;
  return 0;
}

