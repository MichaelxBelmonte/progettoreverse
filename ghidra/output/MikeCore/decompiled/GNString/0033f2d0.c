// Function: FUN_0033f2d0
// Address: 0033f2d0
// Size: 1618 bytes
// Class: GNString


void FUN_0033f2d0(void)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  void *pvVar6;
  pthread_key_t pVar7;
  longlong *plVar8;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  undefined4 uVar9;
  longlong local_f0;
  longlong local_e8;
  longlong local_d8;
  char local_d0;
  longlong local_c8;
  char local_c0;
  longlong local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  longlong *local_80;
  longlong local_78;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  char local_50;
  undefined7 uStack_4f;
  char local_48;
  longlong local_40;
  char local_38;
  
  cVar3 = (**(code **)(&UNK_000018a8 + *unaff_RDI))();
  if ((cVar3 != '\0') && (iVar4 = FUN_01d3a5a0(), iVar4 == 1)) {
    do {
      (**(code **)(*unaff_RDI + 0x658))();
      plVar5 = local_80;
      plVar8 = (longlong *)*unaff_RSI;
      if (plVar8 == local_80) {
        if (((char)unaff_RSI[1] == '\0') && (local_80 != (longlong *)0x0)) {
          if ((char)local_78 == '\0') {
            FUN_00d50b00();
            goto LAB_0033f49c;
          }
LAB_0033f452:
          *(undefined1 *)(unaff_RSI + 1) = 1;
          local_78._0_1_ = '\0';
        }
        lVar1 = *unaff_RSI;
      }
      else {
        lVar1 = unaff_RSI[1];
        if ((char)local_78 != '\0') {
          *unaff_RSI = (longlong)local_80;
          if (((char)lVar1 != '\0') && (plVar8 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
          goto LAB_0033f452;
        }
        if (local_80 != (longlong *)0x0) {
          FUN_00d50b00();
        }
        *unaff_RSI = (longlong)plVar5;
        if (((char)lVar1 != '\0') && (plVar8 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
LAB_0033f49c:
        *(undefined1 *)(unaff_RSI + 1) = 1;
        lVar1 = *unaff_RSI;
      }
      if (lVar1 == 0) {
        if (((char)local_78 != '\0') && (local_80 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        goto LAB_0033f4e5;
      }
      iVar4 = FUN_01d3a5a0();
      if (((char)local_78 != '\0') && (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (iVar4 == 6) {
LAB_0033f4e5:
        (**(code **)(&UNK_000018a0 + *unaff_RDI))();
        (**(code **)(&UNK_000018b0 + *unaff_RDI))();
        return;
      }
    } while( true );
  }
  iVar4 = FUN_01d3a5a0();
  if (((iVar4 != 1) || (iVar4 = FUN_01d3b630(), iVar4 != 1)) || (iVar4 = FUN_01d3b620(), iVar4 != 2)
     ) goto LAB_0033f6c8;
  FUN_01d3abf0();
  local_e8 = FUN_01e466c0();
  (**(code **)(*unaff_RDI + 0xb28))();
  plVar8 = local_80;
  if ((((char)local_78 == '\0') && (local_80 != (longlong *)0x0)) &&
     ((FUN_00d50b00(), (char)local_78 != '\0' && (local_80 != (longlong *)0x0)))) {
    FUN_00d50b20();
  }
  (**(code **)(&UNK_000016c8 + *unaff_RDI))((undefined4)local_e8);
  if (((char)local_78 == '\0') && (local_80 != (longlong *)0x0)) {
    FUN_00d50b00();
    if (((char)local_78 != '\0') && (local_80 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
LAB_0033f6b3:
    FUN_00d50b20();
  }
  else {
    if ((plVar8 != (longlong *)0x0) && (local_80 == (longlong *)0x0)) {
      FUN_00d23310();
      plVar8 = &local_78;
      local_a8 = CONCAT71(local_a8._1_7_,(char)local_78);
      plVar5 = &local_a8;
      if ((char)local_78 != '\0') {
        plVar5 = plVar8;
      }
      *(undefined1 *)plVar5 = 0;
      if (((char)local_78 != '\0') && (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      pVar7 = (pthread_key_t)plVar8;
      (**(code **)(*local_80 + 0x928))();
      pvVar6 = _pthread_getspecific(pVar7);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_01264240();
      lVar1 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
        FUN_00d50b20();
      }
      if ((char)local_a8 != '\0') {
        FUN_00d50b20();
      }
      local_e8 = lVar1;
      FUN_00d403d0();
      local_d8 = DAT_02702d30;
      if (DAT_02702d30 != 0) {
        FUN_00d50b00();
      }
      local_d0 = '\x01';
      FUN_00d50b00();
      lVar2 = DAT_02702d38;
      if (DAT_02702d38 != 0) {
        FUN_00d50b00();
      }
      local_a8 = lVar1;
      local_f0 = lVar2;
      FUN_00083ea0(2,&local_f0);
      FUN_000b4da0();
      local_98 = 0;
      local_a0 = CONCAT71(uStack_4f,local_50);
      if (local_48 == '\0') {
        if (local_a0 != 0) {
          FUN_00d50b00();
        }
      }
      else {
        local_48 = '\0';
      }
      lVar1 = local_e8;
      local_98 = '\x01';
      FUN_00d40470(&local_a0,&stack0xffffffffffffff48,1,3);
      if ((local_98 != '\0') && (local_a0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_48 != '\0') && (CONCAT71(uStack_4f,local_50) != 0)) {
        FUN_00d50b20();
      }
      local_80 = (longlong *)&DAT_0253d630;
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      local_80 = &DAT_024c5048;
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if (unaff_RDI != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if ((local_d0 != '\0') && (local_d8 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      FUN_00d23310();
      plVar8 = local_80;
      plVar5 = &local_78;
      if ((char)local_78 == '\0') {
        plVar5 = (longlong *)&local_50;
      }
      local_50 = (char)local_78;
      *(undefined1 *)plVar5 = 0;
      if (((char)local_78 != '\0') && (local_80 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      uVar9 = (**(code **)(*plVar8 + 0x928))();
      local_90 = local_40;
      local_88 = 0;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          uVar9 = FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_88 = '\x01';
      (**(code **)(*unaff_RDI + 0xda8))(uVar9,1);
      if ((local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if (local_50 != '\0') {
        FUN_00d50b20();
      }
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      FUN_00d50b20();
      return;
    }
    if (local_80 != (longlong *)0x0) goto LAB_0033f6b3;
  }
  if (plVar8 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_0033f6c8:
  local_c8 = *unaff_RSI;
  local_c0 = '\0';
  FUN_01940080();
  if ((local_c0 != '\0') && (local_c8 != 0)) {
    FUN_00d50b20();
  }
  return;
}


