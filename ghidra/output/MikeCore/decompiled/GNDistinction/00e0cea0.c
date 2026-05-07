// Function: FUN_00e0cea0
// Address: 00e0cea0
// Size: 749 bytes
// Class: GNDistinction


ulonglong FUN_00e0cea0(void)

{
  longlong lVar1;
  longlong lVar2;
  int iVar3;
  char cVar4;
  longlong *unaff_RSI;
  longlong unaff_RDI;
  longlong unaff_R14;
  ulonglong uVar5;
  undefined8 uVar6;
  longlong local_98;
  char local_90;
  longlong local_88;
  int local_80;
  longlong local_78;
  char local_70;
  longlong local_68;
  char local_60;
  longlong local_58;
  char local_50;
  longlong local_48;
  longlong local_40;
  char local_38;
  
  lVar1 = *(longlong *)(*unaff_RSI + 0x18);
  if (lVar1 != 0) {
    FUN_00d50b00();
  }
  local_48 = lVar1;
  if (*(longlong *)(unaff_RDI + 0x18) != 0) {
    local_90 = '\0';
    local_98 = 0;
    local_88 = *(longlong *)(*(longlong *)(unaff_RDI + 0x18) + 0x10);
    local_80 = 0;
    if (0 < *(int *)(local_88 + 0xc)) {
      do {
        local_98 = *(longlong *)(*(longlong *)(local_88 + 0x10) + (longlong)local_80 * 8);
        uVar6 = FUN_00e0baf0((longlong)local_80,&local_98);
        lVar1 = local_40;
        if (local_38 == '\0') {
          if (local_40 != 0) {
            uVar6 = FUN_00d50b00();
            if ((local_38 != '\0') && (local_40 != 0)) {
              uVar6 = FUN_00d50b20();
            }
            goto LAB_00e0cfa0;
          }
        }
        else if (local_40 != 0) {
LAB_00e0cfa0:
          FUN_00e0baf0(uVar6,&local_98);
          lVar2 = local_40;
          if ((((local_38 == '\0') && (local_40 != 0)) && (FUN_00d50b00(), local_38 != '\0')) &&
             (local_40 != 0)) {
            FUN_00d50b20();
          }
          local_78 = lVar2;
          local_70 = '\0';
          FUN_00e0cdb0();
          if (local_38 == '\0') {
            if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
              FUN_00d50b20();
            }
          }
          else {
            local_38 = '\0';
          }
          if ((local_70 != '\0') && (local_78 != 0)) {
            FUN_00d50b20();
          }
          local_68 = lVar1;
          local_60 = '\0';
          FUN_00e0cdb0();
          unaff_R14 = local_58;
          if (local_50 == '\0') {
            if (local_58 != 0) {
              FUN_00d50b00();
            }
          }
          else {
            local_50 = '\0';
          }
          local_40 = unaff_R14;
          local_38 = '\0';
          FUN_00d7ab40();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          if (unaff_R14 != 0) {
            FUN_00d50b20();
          }
          if ((local_50 != '\0') && (local_58 != 0)) {
            FUN_00d50b20();
          }
          if ((local_60 != '\0') && (local_68 != 0)) {
            FUN_00d50b20();
          }
          iVar3 = FUN_00c8d620();
          cVar4 = '\x03';
          if ((double)*(int *)(lVar2 + 0xc) * DAT_023942d0 <= (double)iVar3) {
            iVar3 = FUN_00c8d620();
            cVar4 = ((double)iVar3 < (double)*(int *)(lVar1 + 0xc) * DAT_023942d0) * '\x02' + '\x01'
            ;
          }
          FUN_00d50b20();
          FUN_00d50b20();
          FUN_00d50b20();
          if (cVar4 != '\x03') {
            if (local_90 == '\0') goto LAB_00e0d18d;
            goto LAB_00e0d17c;
          }
        }
        local_80 = local_80 + 1;
      } while (local_80 < *(int *)(local_88 + 0xc));
    }
    cVar4 = '\x02';
    if (local_90 != '\0') {
LAB_00e0d17c:
      if (local_98 != 0) {
        FUN_00d50b20();
      }
    }
LAB_00e0d18d:
    uVar5 = CONCAT71((int7)((ulonglong)unaff_R14 >> 8),1);
    if (cVar4 != '\x02') goto LAB_00e0d198;
  }
  uVar5 = 0;
LAB_00e0d198:
  if (local_48 != 0) {
    FUN_00d50b20();
  }
  return uVar5 & 0xffffffff;
}


