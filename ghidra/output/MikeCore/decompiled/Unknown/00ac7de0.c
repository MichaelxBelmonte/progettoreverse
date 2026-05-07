// Function: FUN_00ac7de0
// Address: 00ac7de0
// Size: 1217 bytes
// Class: Unknown


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_00ac7de0(ulong param_1)

{
  undefined1 uVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  ulonglong uVar5;
  byte *pbVar6;
  undefined8 *puVar7;
  undefined8 *unaff_RSI;
  byte *unaff_RDI;
  bool bVar8;
  int local_68;
  int local_60;
  int local_58;
  uint uStack_54;
  byte *local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  byte *local_38;
  
  if ((*unaff_RDI & 1) == 0) {
    if (*unaff_RDI >> 1 != 0) {
LAB_00ac7e05:
      FUN_00aca7e0();
      if ((local_48 & 1) == 0) {
        pbVar6 = (byte *)(ulonglong)((byte)local_48 >> 1);
        if (pbVar6 == (byte *)((longlong)&MACH_HEADER.magic + 1)) goto LAB_00ac7e8b;
LAB_00ac7e23:
        bVar8 = false;
      }
      else {
        pbVar6 = (byte *)CONCAT44(uStack_3c,uStack_40);
        if (pbVar6 != (byte *)((longlong)&MACH_HEADER.magic + 1)) goto LAB_00ac7e23;
LAB_00ac7e8b:
        if ((local_48 & 1) == 0) {
          pbVar6 = (byte *)((longlong)&local_48 + 1);
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
      bVar2 = *unaff_RDI;
      pbVar6 = (byte *)(ulonglong)bVar2;
      if ((bVar2 & 1) == 0) {
        uVar5 = (ulonglong)(bVar2 >> 1);
      }
      else {
        uVar5 = *(ulonglong *)(unaff_RDI + 8);
      }
      if (1 < uVar5) {
        if ((bVar2 & 1) == 0) {
          pbVar6 = unaff_RDI + 1;
          bVar2 = pbVar6[uVar5 - 1];
        }
        else {
          pbVar6 = *(byte **)(unaff_RDI + 0x10);
          bVar2 = pbVar6[uVar5 - 1];
        }
        if (((bVar2 == 0x2e) && (pbVar6[uVar5 - 2] == 0x2e)) &&
           ((uVar5 == 2 || (pbVar6[uVar5 - 3] == 0x2f)))) goto LAB_00ac7eba;
      }
      local_58 = 0;
      uStack_54 = uStack_54 & 0xffffff00;
      if ((DAT_02754570 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
        DAT_02754568 = 0x8fafd21e25c5e09b;
        pbVar6 = &DAT_02520080;
        DAT_02754560 = &DAT_02520080;
        ___cxa_guard_release();
      }
      puVar7 = &DAT_02754560;
      local_50 = (byte *)&DAT_02754560;
      FUN_00ac92d0();
      if (local_68 == 3) {
        if (unaff_RSI == (undefined8 *)0x0) {
          return 0;
        }
        *(undefined4 *)unaff_RSI = 0;
        *(undefined1 *)((longlong)unaff_RSI + 4) = 0;
        if ((DAT_02754570 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
          DAT_02754568 = 0x8fafd21e25c5e09b;
          DAT_02754560 = &DAT_02520080;
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
          if (unaff_RSI == (undefined8 *)0x0) {
            ___cxa_allocate_exception();
            puVar7 = operator_new((ulong)pbVar6);
            *(undefined8 *)((longlong)puVar7 + 0x1d) = 0x736569726f746365;
            puVar7[3] = 0x7463657269645f65;
            puVar7[2] = 0x74616572633a3a6d;
            puVar7[1] = 0x6574737973656c69;
            *puVar7 = 0x663a3a74736f6f62;
            *(undefined1 *)((longlong)puVar7 + 0x25) = 0;
            uVar3 = FUN_00ac4640(CONCAT44(uStack_54,local_58),&local_48,local_50);
                    /* WARNING: Subroutine does not return */
            ___cxa_throw(uVar3,FUN_00ac46f0);
          }
          unaff_RSI[1] = local_50;
          *unaff_RSI = CONCAT44(uStack_54,local_58);
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
  else if (*(longlong *)(unaff_RDI + 8) != 0) goto LAB_00ac7e05;
  if (unaff_RSI == (undefined8 *)0x0) {
    ___cxa_allocate_exception();
    local_38 = operator_new(param_1);
    local_48 = _DAT_023d4f30;
    uStack_44 = _UNK_023d4f34;
    uStack_40 = _UNK_023d4f38;
    uStack_3c = _UNK_023d4f3c;
    *(undefined8 *)((longlong)local_38 + 0x1d) = 0x736569726f746365;
    *(undefined8 *)((longlong)local_38 + 0x18) = 0x7463657269645f65;
    *(undefined8 *)((longlong)local_38 + 0x10) = 0x74616572633a3a6d;
    *(undefined8 *)((longlong)local_38 + 8) = 0x6574737973656c69;
    *(undefined8 *)local_38 = 0x663a3a74736f6f62;
    *(undefined1 *)((longlong)local_38 + 0x25) = 0;
    if ((DAT_02754558 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
      DAT_02754550 = 0xb2ab117a257edf0d;
      DAT_02754548 = &DAT_0251df98;
      ___cxa_guard_release();
    }
    bVar2 = (**(code **)(DAT_02754548 + 0x30))();
    uVar3 = FUN_00ac4640((ulonglong)bVar2 << 0x20 | 0x16);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(uVar3,FUN_00ac46f0);
  }
  if ((DAT_02754558 == '\0') && (iVar4 = ___cxa_guard_acquire(), iVar4 != 0)) {
    DAT_02754550 = 0xb2ab117a257edf0d;
    DAT_02754548 = &DAT_0251df98;
    ___cxa_guard_release();
  }
  *(undefined4 *)unaff_RSI = 0x16;
  puVar7 = &DAT_02754548;
  uVar1 = (**(code **)(DAT_02754548 + 0x30))();
  *(undefined1 *)((longlong)unaff_RSI + 4) = uVar1;
LAB_00ac7e74:
  unaff_RSI[1] = puVar7;
  return 0;
}


