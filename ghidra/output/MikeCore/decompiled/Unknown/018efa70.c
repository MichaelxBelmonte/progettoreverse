// Function: FUN_018efa70
// Address: 018efa70
// Size: 1753 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x018f0100) */
/* WARNING: Removing unreachable block (ram,0x018f010c) */
/* WARNING: Removing unreachable block (ram,0x018efe0a) */
/* WARNING: Removing unreachable block (ram,0x018efe16) */
/* WARNING: Removing unreachable block (ram,0x018efb89) */
/* WARNING: Removing unreachable block (ram,0x018efb95) */
/* WARNING: Removing unreachable block (ram,0x018f009c) */
/* WARNING: Removing unreachable block (ram,0x018f00a8) */
/* WARNING: Removing unreachable block (ram,0x018f011a) */
/* WARNING: Removing unreachable block (ram,0x018f0126) */

void FUN_018efa70(pthread_key_t param_1,longlong *param_2)

{
  longlong lVar1;
  longlong *plVar2;
  byte bVar3;
  char cVar4;
  longlong *plVar5;
  void *pvVar6;
  pthread_key_t pVar7;
  longlong lVar8;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  bool bVar9;
  longlong local_f8;
  char local_f0;
  longlong local_b8;
  char local_b0;
  longlong *local_a8;
  char local_a0;
  longlong local_98;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  longlong local_40;
  char local_38;
  
  if (*param_2 == 0) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    local_48 = param_2;
    if ((DAT_028b0690 == (longlong *)0x0) || (DAT_028b0699 == '\0')) {
      FUN_00e8cb50();
      if (DAT_028b0690 == (longlong *)0x0) {
        plVar5 = (longlong *)FUN_00e8fc40();
        FUN_00022d50();
        (**(code **)(*plVar5 + 0x18))();
        bVar9 = DAT_028b0690 == (longlong *)0x0;
        DAT_028b0690 = plVar5;
        if (((bVar9) || (FUN_00d50b20(), DAT_028b0690 != (longlong *)0x0)) && (DAT_028b0698 == '\0')
           ) {
          DAT_028b0698 = '\x01';
          FUN_00e8cb90();
        }
        DAT_028b0699 = '\x01';
        FUN_00e8cb70();
      }
      else {
        DAT_028b0699 = '\x01';
        FUN_00e8cb70();
      }
    }
    FUN_018f0650();
    lVar8 = local_40;
    if (local_38 == '\0') {
      if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
        FUN_00d50b20();
      }
    }
    else {
      local_38 = '\0';
    }
    if (lVar8 == 0) {
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      lVar1 = unaff_RSI[3];
      if (lVar1 != 0) {
        FUN_00d50b00();
      }
      local_38 = '\x01';
      local_40 = lVar1;
      FUN_018ec350();
      if (lVar1 != 0) {
        FUN_00d50b20();
      }
      plVar5 = local_58;
      local_a0 = 0;
      if (local_50 == '\0') {
        if (local_58 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_50 = '\0';
      }
      local_a0 = '\x01';
      local_a8 = plVar5;
      bVar3 = (**(code **)(*unaff_RSI + 0x3b8))();
      pVar7 = (pthread_key_t)bVar3;
      FUN_018943d0(bVar3,&local_a8);
      plVar5 = local_68;
      if (local_60 == '\0') {
        if (((local_68 != (longlong *)0x0) && (FUN_00d50b00(), local_60 != '\0')) &&
           (local_68 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
      }
      else {
        local_60 = '\0';
      }
      if ((local_a0 != '\0') && (local_a8 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if (plVar5 != (longlong *)0x0) {
        cVar4 = (**(code **)(*plVar5 + 0x398))();
        if (cVar4 != '\0') {
          cVar4 = (**(code **)(*unaff_RSI + 0x3b8))();
          if (cVar4 != '\0') {
            (**(code **)(*unaff_RSI + 0x3e0))();
            local_98 = local_40;
            local_90 = 0;
            if (local_38 == '\0') {
              if (local_40 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            local_90 = '\x01';
            FUN_00ce9f70();
            if ((local_90 != '\0') && (local_98 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            lVar1 = DAT_02704060;
            if (DAT_02704060 != 0) {
              FUN_00d50b00();
            }
            FUN_00cddf30();
            plVar2 = local_58;
            pvVar6 = _pthread_getspecific(pVar7);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_01893a50();
            pvVar6 = _pthread_getspecific(pVar7);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_018babe0();
            local_70 = 0;
            if (local_b0 == '\0') {
              if (local_b8 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_b0 = '\0';
            }
            local_70 = '\x01';
            local_78 = local_b8;
            (**(code **)(*plVar2 + 0x400))();
            (**(code **)(*local_68 + 0x370))();
            local_88 = local_40;
            local_80 = 0;
            if (local_38 == '\0') {
              if (local_40 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_38 = '\0';
            }
            local_80 = '\x01';
            (**(code **)(*plVar5 + 0x378))();
            if ((local_80 != '\0') && (local_88 != 0)) {
              FUN_00d50b20();
            }
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if ((local_70 != '\0') && (local_78 != 0)) {
              FUN_00d50b20();
            }
            if ((local_b0 != '\0') && (local_b8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_f0 != '\0') && (local_f8 != 0)) {
              FUN_00d50b20();
            }
            if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
              FUN_00d50b20();
            }
            if (lVar1 != 0) {
              FUN_00d50b20();
            }
          }
          FUN_00d94e90();
          if (local_40 != 0) {
            lVar8 = local_40;
            if (local_38 == '\0') {
              FUN_00d50b00();
              if ((local_38 != '\0') && (local_40 != 0)) {
                FUN_00d50b20();
              }
            }
            else {
              local_38 = '\0';
            }
          }
        }
        FUN_00d50b20();
      }
    }
    if (lVar8 != 0) {
      FUN_018f0700();
    }
    *unaff_RDI = lVar8;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  return;
}


