// Function: FUN_00ac5160
// Address: 00ac5160
// Size: 1558 bytes
// Class: Unknown
// String references:
//   "boost::filesystem::directory_iterator::construct"

void FUN_00ac5160(string *param_1,nothrow_t *param_2)

{
  uint uVar1;
  int *piVar2;
  char *pcVar3;
  uint64_t uVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  int *piVar8;
  int64_t lVar9;
  uint *puVar10;
  char *pcVar11;
  uint64_t uVar12;
  nothrow_t *pnVar13;
  byte *arg1;
  void*this_ptr;
  uint32_t extraout_XMM0_Da;
  uint32_t extraout_XMM0_Da_00;
  byte local_a0;
  uint64_t local_88;
  uint64_t uStack_80;
  char *local_78;
  uint32_t local_68;
  uint local_64;
  string *local_60;
  int64_t *local_58;
  uint64_t local_48;
  int64_t *local_40;
  
  if ((*arg1 & 1) == 0) {
    uVar12 = (uint64_t)(*arg1 >> 1);
  }
  else {
    uVar12 = *(uint64_t *)(arg1 + 8);
  }
  if (uVar12 == 0) {
    FUN_00ac4ac0("boost::filesystem::directory_iterator::construct",param_1);
    return;
  }
  pcVar11 = (char *)param_1;
  pnVar13 = param_2;
  if (param_1 == (string *)0x0) {
    piVar8 = operator_new(0);
    *piVar8 = 0;
    piVar8[2] = 0;
    piVar8[3] = 0;
    piVar8[4] = 0;
    piVar8[5] = 0;
    piVar8[6] = 0;
    piVar8[7] = 0;
    piVar8[8] = 0;
    piVar8[9] = 0xffff;
    piVar8[10] = 0;
    piVar8[0xb] = 0xffff;
    piVar8[0xc] = 0;
    piVar8[0xd] = 0;
    piVar8[0xe] = 0;
    piVar8[0xf] = 0;
    LOCK();
    *piVar8 = *piVar8 + 1;
    UNLOCK();
    local_68 = 0;
  }
  else {
    *(void*)param_1 = 0;
    param_1[4] = (string)0x0;
    if ((g_02754570 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
      g_02754568 = 0x8fafd21e25c5e09b;
      pcVar11 = &g_02520080;
      g_02754560 = &g_02520080;
      ___cxa_guard_release();
    }
    *(void***)(param_1 + 8) = &g_02754560;
    piVar8 = operator_new((ulong)pcVar11,pnVar13);
    if (piVar8 == (int *)0x0) {
      if ((g_02754558 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
        g_02754550 = 0xb2ab117a257edf0d;
        g_02754548 = &g_0251df98;
        ___cxa_guard_release();
      }
      bVar6 = (**(code **)(g_02754548 + 0x30))();
      *(uint64_t *)param_1 = (uint64_t)bVar6 << 0x20 | 0xc;
      *(void***)(param_1 + 8) = &g_02754548;
      return;
    }
    *piVar8 = 0;
    piVar8[2] = 0;
    piVar8[3] = 0;
    piVar8[4] = 0;
    piVar8[5] = 0;
    piVar8[6] = 0;
    piVar8[7] = 0;
    piVar8[8] = 0;
    piVar8[9] = 0xffff;
    piVar8[10] = 0;
    piVar8[0xb] = 0xffff;
    piVar8[0xc] = 0;
    piVar8[0xd] = 0;
    piVar8[0xe] = 0;
    piVar8[0xf] = 0;
    LOCK();
    iVar7 = *piVar8;
    *piVar8 = *piVar8 + 1;
    UNLOCK();
    local_68 = (uint32_t)CONCAT71((uint7)(uint3)((uint)iVar7 >> 8),1);
  }
  local_88 = 0;
  uStack_80 = 0;
  local_78 = (char *)0x0;
  lVar9 = _opendir_INODE64();
  *(int64_t *)(piVar8 + 0xc) = lVar9;
  if (lVar9 == 0) {
    puVar10 = (uint *)___error();
    uVar1 = *puVar10;
    if ((g_02754570 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
      g_02754568 = 0x8fafd21e25c5e09b;
      g_02754560 = &g_02520080;
      ___cxa_guard_release();
    }
    cVar5 = (**(code **)(g_02754560 + 0x30))();
    local_64 = (uint)param_2;
    pcVar11 = (char *)0x100000000;
    uVar12 = 0;
    if (cVar5 != '\0') {
      uVar12 = 0x100000000;
    }
    pnVar13 = (nothrow_t *)(uVar12 | uVar1);
    local_58 = (int64_t *)&g_02754560;
    local_60 = (string *)pnVar13;
    if (uVar1 != 0) {
      if ((g_02754558 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
        g_02754550 = 0xb2ab117a257edf0d;
        pcVar11 = &g_0251df98;
        g_02754548 = &g_0251df98;
        ___cxa_guard_release();
      }
      cVar5 = (**(code **)(g_02754548 + 0x30))();
      local_48 = 0xd;
      if (cVar5 != '\0') {
        local_48 = 0x10000000d;
      }
      local_40 = (int64_t *)&g_02754548;
      cVar5 = (**(code **)(*local_58 + 0x10))(extraout_XMM0_Da,&local_48);
      if (cVar5 == '\0') {
        bVar6 = (**(code **)(*local_40 + 0x18))(extraout_XMM0_Da_00,local_48 & 0xffffffff);
        bVar6 = bVar6 ^ 1;
      }
      else {
        bVar6 = 0;
      }
      if (((local_64 & 1) == 0) || (bVar6 != 0)) {
        if ((int)local_60 == 0) {
          if (param_1 != (string *)0x0) {
            *(void*)param_1 = 0;
            param_1[4] = (string)0x0;
            if ((g_02754570 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
              pcVar11 = (char *)&g_02754560;
              g_02754568 = 0x8fafd21e25c5e09b;
              g_02754560 = &g_02520080;
              ___cxa_guard_release();
            }
            *(void***)(param_1 + 8) = &g_02754560;
          }
        }
        else {
          pcVar11 = "boost::filesystem::directory_iterator::construct";
          FUN_00ac4ac0("boost::filesystem::directory_iterator::construct",param_1);
        }
      }
      goto LAB_00ac54f1;
    }
  }
  else {
    std::string::assign(pcVar11);
    if ((g_02754570 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
      g_02754568 = 0x8fafd21e25c5e09b;
      pcVar11 = &g_02520080;
      g_02754560 = &g_02520080;
      ___cxa_guard_release();
    }
    local_60 = (string *)0x0;
  }
  local_58 = (int64_t *)&g_02754560;
  if (*(int64_t *)(piVar8 + 0xc) == 0) goto LAB_00ac54f1;
  piVar2 = (int *)*this_ptr;
  *this_ptr = piVar8;
  std::string::string((string *)pcVar11,(string *)pnVar13);
  std::string::string((string *)pcVar11,(string *)pnVar13);
  FUN_00ac9740();
  std::string::operator=((string *)pcVar11,(string *)pnVar13);
  uVar4 = _UNK_023d4ec8;
  *(void*)(piVar8 + 8) = g_023d4ec0;
  *(void*)(piVar8 + 10) = uVar4;
  if ((local_48 & 1) == 0) {
    if ((local_a0 & 1) == 0) goto LAB_00ac536b;
LAB_00ac5457:
    operator_delete(pcVar11);
    if ((local_88 & 1) == 0) goto LAB_00ac546d;
LAB_00ac5375:
    cVar5 = *local_78;
    pcVar3 = local_78;
  }
  else {
    operator_delete(pcVar11);
    if ((local_a0 & 1) != 0) goto LAB_00ac5457;
LAB_00ac536b:
    if ((local_88 & 1) != 0) goto LAB_00ac5375;
LAB_00ac546d:
    pcVar3 = (char *)((int64_t)&local_88 + 1);
    cVar5 = local_88._1_1_;
  }
  piVar8 = piVar2;
  if (cVar5 == '.') {
    cVar5 = pcVar3[1];
    pcVar11 = (char *)CONCAT71((int7)((uint64_t)pcVar11 >> 8),cVar5);
    if ((cVar5 == '\0') || ((cVar5 == '.' && (pcVar3[2] == '\0')))) {
      FUN_00ac59d0();
    }
  }
LAB_00ac54f1:
  if ((local_88 & 1) != 0) {
    operator_delete(pcVar11);
  }
  if (piVar8 != (int *)0x0) {
    LOCK();
    iVar7 = *piVar8;
    *piVar8 = *piVar8 + -1;
    UNLOCK();
    if (iVar7 == 1) {
      FUN_00ac5050();
      if ((*(byte *)(piVar8 + 2) & 1) != 0) {
        operator_delete(pcVar11);
      }
      operator_delete(pcVar11);
    }
  }
  return;
}

