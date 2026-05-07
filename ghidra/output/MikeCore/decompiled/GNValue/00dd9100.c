// Function: FUN_00dd9100
// Address: 00dd9100
// Size: 578 bytes
// Class: GNValue
// String references:
//   "uploading %3.0f %%: %@"


void FUN_00dd9100(void)

{
  int iVar1;
  longlong lVar2;
  longlong *plVar3;
  char *pcVar4;
  longlong unaff_RSI;
  longlong *unaff_RDI;
  float fVar5;
  undefined4 uVar6;
  longlong local_b0;
  char local_a8 [8];
  longlong *local_a0;
  char local_98;
  float local_8c;
  longlong local_88;
  char local_80;
  longlong *local_78;
  undefined4 local_70;
  float local_6c;
  longlong local_68;
  char local_60;
  longlong local_48;
  char local_40;
  char local_38 [8];
  
  if (unaff_RDI[0x1b] != unaff_RSI) {
    unaff_RDI[0x1b] = unaff_RSI;
    FUN_00e922a0();
    if (local_78 != (longlong *)0x0) {
      iVar1 = *(int *)(unaff_RDI[0x19] + 0xc);
      if ((char)local_70 != '\0') {
        (**(code **)(*local_78 + 0x10))();
        FUN_00d50b20();
      }
      if (iVar1 != 0) {
        FUN_00e922a0();
        plVar3 = local_a0;
        FUN_00d50b00();
        local_8c = (float)(**(code **)(*unaff_RDI + 0x390))();
        FUN_00d23310();
        pcVar4 = local_38;
        if (local_a8[0] != '\0') {
          pcVar4 = local_a8;
        }
        local_38[0] = local_a8[0];
        *pcVar4 = '\0';
        if ((local_a8[0] != '\0') && (local_b0 != 0)) {
          FUN_00d50b20();
        }
        lVar2 = *(longlong *)(local_b0 + 0x20);
        if (lVar2 != 0) {
          FUN_00d50b00();
        }
        fVar5 = local_8c * DAT_023908e0;
        local_70 = 2;
        local_78 = (longlong *)&DAT_024ff418;
        local_60 = 0;
        local_6c = fVar5;
        if (lVar2 != 0) {
          fVar5 = (float)FUN_00d50b00();
        }
        local_60 = '\x01';
        local_68 = lVar2;
        uVar6 = FUN_00d8cb40(fVar5,&local_78);
        local_48 = local_88;
        local_40 = 0;
        if (local_80 == '\0') {
          if (local_88 != 0) {
            uVar6 = FUN_00d50b00();
          }
        }
        else {
          local_80 = '\0';
        }
        local_40 = '\x01';
        (**(code **)(*plVar3 + 0x20))(uVar6,&local_48);
        if ((local_40 != '\0') && (local_48 != 0)) {
          FUN_00d50b20();
        }
        if ((local_80 != '\0') && (local_88 != 0)) {
          FUN_00d50b20();
        }
        local_78 = (longlong *)&DAT_024ff418;
        if ((local_60 != '\0') && (local_68 != 0)) {
          FUN_00d50b20();
        }
        if (lVar2 != 0) {
          FUN_00d50b20();
        }
        if (local_38[0] != '\0') {
          FUN_00d50b20();
        }
        if (unaff_RDI != (longlong *)0x0) {
          FUN_00d50b20();
        }
        if ((local_98 != '\0') && (local_a0 != (longlong *)0x0)) {
          (**(code **)(*local_a0 + 0x10))();
          FUN_00d50b20();
        }
      }
    }
  }
  return;
}


