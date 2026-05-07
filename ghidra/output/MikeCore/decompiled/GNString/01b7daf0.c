// Function: FUN_01b7daf0
// Address: 01b7daf0
// Size: 1108 bytes
// Class: GNString


ulonglong FUN_01b7daf0(undefined8 param_1,byte param_2)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  uint uVar4;
  longlong *plVar5;
  void *pvVar6;
  pthread_key_t pVar7;
  undefined *puVar8;
  longlong *unaff_RDI;
  ulonglong uVar9;
  undefined4 uVar10;
  longlong *local_c0;
  char local_b8;
  longlong local_b0;
  char local_a8;
  undefined4 local_9c;
  undefined8 local_98;
  longlong local_90;
  longlong local_88;
  char local_80;
  ulonglong local_78;
  undefined *local_70;
  undefined8 local_68;
  longlong *local_60;
  longlong local_58;
  char local_50;
  longlong *local_48;
  longlong local_40;
  char local_38;
  
  (**(code **)(*unaff_RDI + 0xad0))();
  lVar1 = local_40;
  if (local_38 == '\0') {
    if (local_40 != 0) {
      FUN_00d50b00();
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      goto LAB_01b7db53;
    }
  }
  else if (local_40 != 0) {
LAB_01b7db53:
    local_90 = lVar1;
    uVar4 = (**(code **)(*unaff_RDI + 0x9d0))();
    uVar9 = (ulonglong)uVar4;
    if ((param_2 & (byte)uVar4) == 1) {
      plVar5 = (longlong *)FUN_00e8fc40();
      FUN_00d4ff40();
      plVar5[2] = 0;
      plVar5[3] = 0;
      plVar5[4] = 0;
      puVar8 = &DAT_0258cea8;
      *plVar5 = (longlong)&DAT_0258cea8;
      *(undefined4 *)(plVar5 + 5) = 0;
      *(undefined1 *)((longlong)plVar5 + 0x2c) = 0;
      plVar5[6] = 0;
      plVar5[7] = 0;
      plVar5[8] = 0;
      plVar5[9] = 0;
      plVar5[10] = 0;
      plVar5[0xb] = 0;
      plVar5[0xc] = 0;
      plVar5[0xd] = 0;
      plVar5[0xe] = 0;
      plVar5[0xf] = 0;
      plVar5[0x10] = 0;
      plVar5[0x11] = 0;
      plVar5[0x12] = 0;
      plVar5[0x13] = 0;
      plVar5[0x14] = 0;
      plVar5[0x15] = 0;
      plVar5[0x16] = 0;
      plVar5[0x17] = 0;
      plVar5[0x18] = 0;
      plVar5[0x19] = 0;
      plVar5[0x1a] = 0;
      (*DAT_0258cec0)();
      local_60 = plVar5;
      local_78 = (**(code **)(*unaff_RDI + 0x9d8))();
      local_70 = (undefined *)(**(code **)(*unaff_RDI + 0x9e0))();
      plVar5 = (longlong *)FUN_010eca10();
      (**(code **)(*plVar5 + 0x18))();
      local_9c = 0xffffffff;
      local_80 = '\0';
      local_88 = 0;
      local_48 = plVar5;
      while( true ) {
        pVar7 = (pthread_key_t)puVar8;
        lVar1 = unaff_RDI[0x2b];
        if (lVar1 != 0) {
          FUN_00d50b00();
        }
        pvVar6 = _pthread_getspecific(pVar7);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        puVar8 = local_70;
        cVar3 = FUN_01252960(local_70,local_78,&local_88,&local_98);
        if (lVar1 != 0) {
          FUN_00d50b20();
        }
        pVar7 = (pthread_key_t)puVar8;
        if (cVar3 == '\0') break;
        if (local_88 != 0) {
          if (((local_98._4_4_ != 0) && (local_78 >> 0x20 != 0)) &&
             (cVar3 = FUN_00e7c020(), cVar3 != '\0')) {
            local_98 = local_78;
          }
          if (((local_68._4_4_ != 0) && ((ulonglong)local_70 >> 0x20 != 0)) &&
             (cVar3 = FUN_00e7c020(), cVar3 != '\0')) {
            local_68 = local_70;
          }
          pvVar6 = _pthread_getspecific(pVar7);
          if (pvVar6 != (void *)0x0) {
            FUN_00e8b990();
          }
          local_40 = local_88;
          local_38 = '\0';
          puVar8 = local_68;
          FUN_012502a0(local_68,local_98,(char)unaff_RDI[0x36]);
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
      }
      FUN_01ca6970();
      lVar2 = local_40;
      lVar1 = local_90;
      if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
         (local_40 != 0)) {
        FUN_00d50b20();
      }
      uVar10 = FUN_01ca5d90();
      local_c0 = local_48;
      local_b8 = '\0';
      uVar10 = (**(code **)(*local_60 + 0x5f0))(uVar10,&local_c0);
      local_58 = local_40;
      local_50 = 0;
      if (local_38 == '\0') {
        if (local_40 != 0) {
          uVar10 = FUN_00d50b00();
        }
      }
      else {
        local_38 = '\0';
      }
      local_50 = '\x01';
      local_b0 = lVar1;
      local_a8 = '\0';
      FUN_01ca79b0(uVar10,&local_b0);
      plVar5 = local_48;
      if ((local_a8 != '\0') && (local_b0 != 0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != 0)) {
        FUN_00d50b20();
      }
      if ((local_38 != '\0') && (local_40 != 0)) {
        FUN_00d50b20();
      }
      if ((local_b8 != '\0') && (local_c0 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (lVar2 != 0) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != 0)) {
        FUN_00d50b20();
      }
      if (plVar5 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      uVar9 = CONCAT71((int7)((ulonglong)lVar1 >> 8),1);
      FUN_00d50b20();
    }
    FUN_00d50b20();
    goto LAB_01b7df3a;
  }
  uVar9 = 0;
LAB_01b7df3a:
  return uVar9 & 0xffffffff;
}


