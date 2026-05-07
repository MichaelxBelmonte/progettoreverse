// Function: FUN_00ac5160
// Address: 00ac5160
// Size: 1558 bytes
// Class: Unknown
// String references:
//   "boost::filesystem::directory_iterator::construct"


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00ac5160(string *param_1,nothrow_t *param_2)

{
  uint uVar1;
  int *piVar2;
  char *pcVar3;
  undefined8 uVar4;
  char cVar5;
  byte bVar6;
  int iVar7;
  int *piVar8;
  longlong lVar9;
  uint *puVar10;
  char *pcVar11;
  ulonglong uVar12;
  nothrow_t *pnVar13;
  byte *unaff_RSI;
  undefined8 *unaff_RDI;
  undefined4 extraout_XMM0_Da;
  undefined4 extraout_XMM0_Da_00;
  byte local_a0;
  undefined8 local_88;
  undefined8 uStack_80;
  char *local_78;
  undefined4 local_68;
  uint local_64;
  string *local_60;
  longlong *local_58;
  ulonglong local_48;
  longlong *local_40;
  
  if ((*unaff_RSI & 1) == 0) {
    uVar12 = (ulonglong)(*unaff_RSI >> 1);
  }
  else {
    uVar12 = *(ulonglong *)(unaff_RSI + 8);
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
    *(undefined4 *)param_1 = 0;
    param_1[4] = (string)0x0;
    if ((DAT_02754570 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
      DAT_02754568 = 0x8fafd21e25c5e09b;
      pcVar11 = &DAT_02520080;
      DAT_02754560 = &DAT_02520080;
      ___cxa_guard_release();
    }
    *(undefined ***)(param_1 + 8) = &DAT_02754560;
    piVar8 = operator_new((ulong)pcVar11,pnVar13);
    if (piVar8 == (int *)0x0) {
      if ((DAT_02754558 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
        DAT_02754550 = 0xb2ab117a257edf0d;
        DAT_02754548 = &DAT_0251df98;
        ___cxa_guard_release();
      }
      bVar6 = (**(code **)(DAT_02754548 + 0x30))();
      *(ulonglong *)param_1 = (ulonglong)bVar6 << 0x20 | 0xc;
      *(undefined ***)(param_1 + 8) = &DAT_02754548;
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
    local_68 = (undefined4)CONCAT71((uint7)(uint3)((uint)iVar7 >> 8),1);
  }
  local_88 = 0;
  uStack_80 = 0;
  local_78 = (char *)0x0;
  lVar9 = _opendir_INODE64();
  *(longlong *)(piVar8 + 0xc) = lVar9;
  if (lVar9 == 0) {
    puVar10 = (uint *)___error();
    uVar1 = *puVar10;
    if ((DAT_02754570 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
      DAT_02754568 = 0x8fafd21e25c5e09b;
      DAT_02754560 = &DAT_02520080;
      ___cxa_guard_release();
    }
    cVar5 = (**(code **)(DAT_02754560 + 0x30))();
    local_64 = (uint)param_2;
    pcVar11 = (char *)0x100000000;
    uVar12 = 0;
    if (cVar5 != '\0') {
      uVar12 = 0x100000000;
    }
    pnVar13 = (nothrow_t *)(uVar12 | uVar1);
    local_58 = (longlong *)&DAT_02754560;
    local_60 = (string *)pnVar13;
    if (uVar1 != 0) {
      if ((DAT_02754558 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
        DAT_02754550 = 0xb2ab117a257edf0d;
        pcVar11 = &DAT_0251df98;
        DAT_02754548 = &DAT_0251df98;
        ___cxa_guard_release();
      }
      cVar5 = (**(code **)(DAT_02754548 + 0x30))();
      local_48 = 0xd;
      if (cVar5 != '\0') {
        local_48 = 0x10000000d;
      }
      local_40 = (longlong *)&DAT_02754548;
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
            *(undefined4 *)param_1 = 0;
            param_1[4] = (string)0x0;
            if ((DAT_02754570 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
              pcVar11 = (char *)&DAT_02754560;
              DAT_02754568 = 0x8fafd21e25c5e09b;
              DAT_02754560 = &DAT_02520080;
              ___cxa_guard_release();
            }
            *(undefined ***)(param_1 + 8) = &DAT_02754560;
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
    if ((DAT_02754570 == '\0') && (iVar7 = ___cxa_guard_acquire(), iVar7 != 0)) {
      DAT_02754568 = 0x8fafd21e25c5e09b;
      pcVar11 = &DAT_02520080;
      DAT_02754560 = &DAT_02520080;
      ___cxa_guard_release();
    }
    local_60 = (string *)0x0;
  }
  local_58 = (longlong *)&DAT_02754560;
  if (*(longlong *)(piVar8 + 0xc) == 0) goto LAB_00ac54f1;
  piVar2 = (int *)*unaff_RDI;
  *unaff_RDI = piVar8;
  std::string::string((string *)pcVar11,(string *)pnVar13);
  std::string::string((string *)pcVar11,(string *)pnVar13);
  FUN_00ac9740();
  std::string::operator=((string *)pcVar11,(string *)pnVar13);
  uVar4 = _UNK_023d4ec8;
  *(undefined8 *)(piVar8 + 8) = _DAT_023d4ec0;
  *(undefined8 *)(piVar8 + 10) = uVar4;
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
    pcVar3 = (char *)((longlong)&local_88 + 1);
    cVar5 = local_88._1_1_;
  }
  piVar8 = piVar2;
  if (cVar5 == '.') {
    cVar5 = pcVar3[1];
    pcVar11 = (char *)CONCAT71((int7)((ulonglong)pcVar11 >> 8),cVar5);
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


