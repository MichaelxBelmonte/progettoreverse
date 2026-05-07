// Function: FUN_01912630
// Address: 01912630
// Size: 825 bytes
// Class: GNList
// String references:
//   "%@.%d.%d"


void FUN_01912630(undefined4 param_1)

{
  longlong lVar1;
  undefined8 *puVar2;
  pthread_key_t pVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  void *pvVar7;
  undefined8 uVar8;
  pthread_key_t in_ECX;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  undefined8 *local_a8;
  undefined8 local_a0;
  longlong local_98;
  char local_90;
  longlong *local_88;
  char local_80;
  undefined8 *local_78;
  double local_70;
  uint local_64;
  undefined8 *local_60;
  undefined4 local_58;
  longlong local_50;
  char local_48;
  int local_40;
  int local_3c;
  undefined4 local_34;
  
  lVar1 = DAT_027e02b0;
  if (*(longlong *)(unaff_RSI + 0x50) == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (lVar1 != 0) {
      FUN_00d50b00();
    }
    *unaff_RDI = lVar1;
    *(undefined1 *)(unaff_RDI + 1) = 1;
    return;
  }
  local_70 = (double)CONCAT44(local_70._4_4_,param_1);
  pvVar7 = _pthread_getspecific(in_ECX);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  local_70 = (double)local_70._0_4_;
  uVar8 = FUN_016ca720(0,0,0);
  local_78 = local_60;
  if ((char)local_58 == '\0') {
    if (local_60 != (undefined8 *)0x0) {
      FUN_00d50b00();
      if (((char)local_58 != '\0') && (local_60 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_01912709;
    }
LAB_01912727:
    pVar3 = 4;
    local_34 = (undefined4)CONCAT71((int7)((ulonglong)uVar8 >> 8),1);
  }
  else {
    if (local_60 == (undefined8 *)0x0) goto LAB_01912727;
LAB_01912709:
    pVar3 = FUN_0123ff00();
    if ((int)pVar3 < 1) {
      local_64 = 0x10;
      local_34 = 0;
      goto LAB_01912749;
    }
    local_64 = 2;
    local_34 = 0;
    if (0xf < (int)pVar3) goto LAB_01912749;
  }
  local_64 = (uint)(byte)(0x10 / (byte)pVar3);
LAB_01912749:
  pvVar7 = _pthread_getspecific(pVar3);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_00e7bcc0();
  pVar3 = 0;
  FUN_016cb910(local_70,4,0);
  pvVar7 = _pthread_getspecific(pVar3);
  if (pvVar7 != (void *)0x0) {
    FUN_00e8b990();
  }
  iVar4 = FUN_016cae50(0,&local_a8);
  puVar2 = local_a8;
  FUN_00e7bcc0();
  local_60 = puVar2;
  FUN_00e7c860();
  local_a0 = FUN_00e7cd00();
  local_60 = local_a8;
  FUN_00e7b970();
  puVar2 = local_60;
  iVar5 = FUN_00e7cea0();
  local_60 = puVar2;
  FUN_00e7c2a0();
  iVar6 = FUN_00e7cea0();
  FUN_018c3210();
  uVar8 = (**(code **)(*local_88 + 0x378))((float)iVar4);
  local_50 = local_98;
  local_58 = 3;
  local_60 = &DAT_024c5048;
  local_48 = 0;
  if (local_98 != 0) {
    uVar8 = FUN_00d50b00();
  }
  local_40 = iVar5 + 1;
  local_3c = iVar6 + 1;
  local_48 = '\x01';
  local_60 = (undefined8 *)&DAT_02509758;
  FUN_00d8cb40(uVar8,&local_60);
  local_60 = &DAT_024c5048;
  if ((local_48 != '\0') && (local_50 != 0)) {
    FUN_00d50b20();
  }
  if ((local_90 != '\0') && (local_98 != 0)) {
    FUN_00d50b20();
  }
  if ((local_80 != '\0') && (local_88 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)local_34 == '\0') {
    FUN_00d50b20();
  }
  return;
}


