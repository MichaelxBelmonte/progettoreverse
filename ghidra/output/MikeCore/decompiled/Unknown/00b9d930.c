// Function: FUN_00b9d930
// Address: 00b9d930
// Size: 1119 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x00b9dc41) */
/* WARNING: Removing unreachable block (ram,0x00b9dc4a) */
/* WARNING: Removing unreachable block (ram,0x00b9dcff) */
/* WARNING: Removing unreachable block (ram,0x00b9dd08) */
/* WARNING: Removing unreachable block (ram,0x00b9dd3e) */
/* WARNING: Removing unreachable block (ram,0x00b9dd4a) */

void FUN_00b9d930(void)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  longlong lVar4;
  char cVar5;
  longlong lVar6;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  int iVar7;
  longlong local_e0;
  longlong local_b8;
  char local_b0;
  longlong local_a8;
  char local_a0;
  undefined4 local_98;
  undefined4 uStack_94;
  char local_90;
  longlong local_88;
  char local_80;
  longlong local_78;
  char local_70;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  if (*unaff_RSI != 0) {
    (**(code **)(*unaff_RDI + 0x3a8))();
    if ((local_b0 != '\0') && (local_b8 != 0)) {
      FUN_00d50b20();
    }
    if (local_b8 != 0) {
      if ((DAT_028a56b0 == 0) || (lVar2 = DAT_028a56b0, DAT_028a56b9 == '\0')) {
        FUN_00e8cb50();
        lVar3 = DAT_02765240;
        if (DAT_028a56b0 == 0) {
          if (DAT_02765240 != 0) {
            FUN_00d50b00();
          }
          lVar2 = DAT_02764890;
          if (DAT_02764890 != 0) {
            FUN_00d50b00();
          }
          lVar4 = DAT_02765250;
          if (DAT_02765250 != 0) {
            FUN_00d50b00();
          }
          local_78 = lVar2;
          local_e0 = lVar4;
          FUN_002bd7b0(&local_e0,&local_78,3);
          FUN_000b6830();
          lVar6 = DAT_028a56b0;
          if (DAT_028a56b0 != local_40) {
            if (local_38 == '\0') {
              if (local_40 == 0) {
                lVar6 = 0;
              }
              else {
                FUN_00d50b00();
                lVar6 = local_40;
              }
            }
            else {
              local_38 = '\0';
              lVar6 = local_40;
            }
            bVar1 = DAT_028a56b0 != 0;
            DAT_028a56b0 = lVar6;
            if (bVar1) {
              FUN_00d50b20();
              lVar6 = local_40;
            }
          }
          if ((lVar6 != 0) && (DAT_028a56b8 == '\0')) {
            DAT_028a56b8 = '\x01';
            FUN_00e8cb90();
            lVar6 = local_40;
          }
          if ((local_38 != '\0') && (lVar6 != 0)) {
            FUN_00d50b20();
          }
          if ((local_80 != '\0') && (local_88 != 0)) {
            FUN_00d50b20();
          }
          if ((local_90 != '\0') && (CONCAT44(uStack_94,local_98) != 0)) {
            FUN_00d50b20();
          }
          if ((local_a0 != '\0') && (local_a8 != 0)) {
            FUN_00d50b20();
          }
          if (lVar4 != 0) {
            FUN_00d50b20();
          }
          if (lVar2 != 0) {
            FUN_00d50b20();
          }
          if (lVar3 != 0) {
            FUN_00d50b20();
          }
          DAT_028a56b9 = '\x01';
          FUN_00e8cb70();
          lVar2 = DAT_028a56b0;
          local_50 = lVar3;
        }
        else {
          DAT_028a56b9 = '\x01';
          FUN_00e8cb70();
          lVar2 = DAT_028a56b0;
        }
      }
      DAT_028a56b0 = lVar2;
      if (lVar2 != 0) {
        if (0 < *(int *)(lVar2 + 0xc)) {
          iVar7 = 0;
          do {
            (**(code **)(*unaff_RDI + 0x3a8))();
            cVar5 = FUN_00c9ff50();
            if ((local_48 != '\0') && (local_50 != 0)) {
              FUN_00d50b20();
            }
            if (cVar5 != '\0') {
              (**(code **)(*unaff_RDI + 0x3a8))();
              FUN_000175c0();
              if (local_48 == '\0') {
                if (local_50 != 0) {
                  FUN_00d50b00();
                }
              }
              else {
                local_48 = '\0';
              }
              FUN_00ca0840();
              if (local_50 != 0) {
                FUN_00d50b20();
              }
              if ((local_48 != '\0') && (local_50 != 0)) {
                FUN_00d50b20();
              }
              if ((local_70 != '\0') && (local_78 != 0)) {
                FUN_00d50b20();
              }
            }
            iVar7 = iVar7 + 1;
          } while (iVar7 < *(int *)(lVar2 + 0xc));
        }
        FUN_00018280();
      }
    }
  }
  return;
}


