// Function: FUN_00b7b8b0
// Address: 00b7b8b0
// Size: 838 bytes
// Class: GNFilePath


void FUN_00b7b8b0(void)

{
  bool bVar1;
  longlong lVar2;
  longlong *plVar3;
  char cVar4;
  longlong *plVar5;
  longlong *plVar6;
  undefined8 *unaff_RDI;
  longlong local_70;
  char local_68;
  longlong local_60;
  char local_58;
  longlong *local_50;
  char local_48;
  longlong *local_40;
  char local_38;
  
  plVar6 = DAT_028a53b8;
  if ((DAT_028a53b8 == (longlong *)0x0) || (DAT_028a53c1 == '\0')) {
    FUN_00e8cb50();
    if (DAT_028a53b8 == (longlong *)0x0) {
      FUN_00d6f370();
      plVar6 = local_40;
      if ((((local_38 == '\0') && (local_40 != (longlong *)0x0)) &&
          (FUN_00d50b00(), local_38 != '\0')) && (local_40 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      lVar2 = DAT_027bf420;
      if (DAT_027bf420 != 0) {
        FUN_00d50b00();
      }
      local_70 = lVar2;
      local_68 = '\x01';
      local_60 = 0;
      local_58 = '\0';
      FUN_00d710b0(&local_60,&local_70);
      plVar3 = local_40;
      if (local_38 == '\0') {
        if (((local_40 != (longlong *)0x0) && (FUN_00d50b00(), local_38 != '\0')) &&
           (local_40 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_38 = '\0';
      }
      if ((local_58 != '\0') && (local_60 != 0)) {
        FUN_00d50b20();
      }
      if ((local_68 != '\0') && (local_70 != 0)) {
        FUN_00d50b20();
      }
      if (plVar3 == (longlong *)0x0) {
LAB_00b7baf7:
        if (DAT_028a53b8 == (longlong *)0x0) goto LAB_00b7bb00;
      }
      else {
        local_50 = plVar3;
        local_48 = '\0';
        FUN_00cddf30();
        plVar5 = DAT_028a53b8;
        if (DAT_028a53b8 != local_40) {
          if (local_38 == '\0') {
            if (local_40 == (longlong *)0x0) {
              plVar5 = (longlong *)0x0;
            }
            else {
              FUN_00d50b00();
              plVar5 = local_40;
            }
          }
          else {
            local_38 = '\0';
            plVar5 = local_40;
          }
          bVar1 = DAT_028a53b8 != (longlong *)0x0;
          DAT_028a53b8 = plVar5;
          if (bVar1) {
            FUN_00d50b20();
            plVar5 = local_40;
          }
        }
        if ((plVar5 != (longlong *)0x0) && (DAT_028a53c0 == '\0')) {
          DAT_028a53c0 = '\x01';
          FUN_00e8cb90();
          plVar5 = local_40;
        }
        if ((local_38 != '\0') && (plVar5 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if ((local_48 != '\0') && (local_50 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        if (DAT_028a53b8 != (longlong *)0x0) {
          cVar4 = (**(code **)(*DAT_028a53b8 + 0x3a0))();
          if (((cVar4 == '\0') && (cVar4 = (**(code **)(*DAT_028a53b8 + 0x428))(), cVar4 == '\0'))
             && (DAT_028a53b8 != (longlong *)0x0)) {
            DAT_028a53b8 = (longlong *)0x0;
            FUN_00d50b20();
          }
          goto LAB_00b7baf7;
        }
LAB_00b7bb00:
        FUN_00b7b410();
        if ((local_38 == '\0') && (local_40 != (longlong *)0x0)) {
          FUN_00d50b00();
        }
        cVar4 = (**(code **)(*local_40 + 0x3a0))();
        if (cVar4 == '\0') {
          (**(code **)(*local_40 + 0x428))();
        }
        plVar5 = DAT_028a53b8;
        if (DAT_028a53b8 != local_40) {
          FUN_00d50b00();
          DAT_028a53b8 = local_40;
          if (plVar5 != (longlong *)0x0) {
            FUN_00d50b20();
          }
        }
        if (DAT_028a53c0 == '\0') {
          DAT_028a53c0 = '\x01';
          FUN_00e8cb90();
        }
        else if (local_40 == (longlong *)0x0) goto LAB_00b7bb91;
        FUN_00d50b20();
      }
LAB_00b7bb91:
      if (plVar3 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      if (plVar6 != (longlong *)0x0) {
        FUN_00d50b20();
      }
      DAT_028a53c1 = '\x01';
      FUN_00e8cb70();
    }
    else {
      DAT_028a53c1 = '\x01';
      FUN_00e8cb70();
    }
    plVar6 = DAT_028a53b8;
    *(undefined1 *)(unaff_RDI + 1) = 0;
    if (plVar6 == (longlong *)0x0) {
      plVar6 = (longlong *)0x0;
      goto LAB_00b7bbd0;
    }
  }
  else {
    *(undefined1 *)(unaff_RDI + 1) = 0;
  }
  FUN_00d50b00();
LAB_00b7bbd0:
  *unaff_RDI = plVar6;
  *(undefined1 *)(unaff_RDI + 1) = 1;
  return;
}


