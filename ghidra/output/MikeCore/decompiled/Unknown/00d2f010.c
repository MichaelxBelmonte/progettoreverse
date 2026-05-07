// Function: FUN_00d2f010
// Address: 00d2f010
// Size: 673 bytes
// Class: Unknown


/* WARNING: Removing unreachable block (ram,0x00d2f086) */
/* WARNING: Removing unreachable block (ram,0x00d2f092) */

undefined8 * FUN_00d2f010(undefined8 param_1,longlong *param_2)

{
  char cVar1;
  undefined8 *puVar2;
  longlong lVar3;
  int iVar4;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong local_98;
  char local_90;
  undefined8 *local_88;
  char local_80;
  longlong *local_78;
  char local_70;
  longlong *local_68;
  char local_60;
  longlong local_58;
  undefined8 local_50;
  int local_48;
  longlong local_40;
  char local_38;
  
  puVar2 = (undefined8 *)FUN_00e8fc40();
  FUN_00d4ff40();
  *puVar2 = &DAT_02572358;
  (*DAT_02572370)();
  cVar1 = (**(code **)(*unaff_RSI + 0x368))();
  if (cVar1 != '\0') {
    if (unaff_RSI[2] != 0) {
      local_60 = '\0';
      local_68 = (longlong *)0x0;
      local_50 = 0xffffffff;
      local_48 = 0;
      local_50._4_4_ = 0;
      local_58 = unaff_RSI[2];
      while( true ) {
        if (local_50._4_4_ != 0) {
          if (local_50._4_4_ < 1) {
            iVar4 = -local_50._4_4_;
          }
          else {
            iVar4 = (int)local_50 - local_50._4_4_;
            local_50 = CONCAT44(local_50._4_4_,iVar4);
            FUN_00d23690();
            local_48 = local_48 + local_50._4_4_;
            iVar4 = 0;
          }
          local_50 = CONCAT44(iVar4,(int)local_50);
        }
        lVar3 = (longlong)(int)local_50;
        iVar4 = (int)local_50 + 1;
        local_50 = CONCAT44(local_50._4_4_,iVar4);
        if (*(int *)(local_58 + 0xc) <= iVar4) break;
        local_68 = *(longlong **)(*(longlong *)(local_58 + 0x10) + 8 + lVar3 * 8);
        local_98 = *param_2;
        local_90 = '\0';
        (**(code **)(*local_68 + 0x3c0))(*(longlong *)(local_58 + 0x10),&local_98);
        lVar3 = local_40;
        if (local_38 == '\0') {
          if (((local_40 != 0) && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)) {
            FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
        }
        if ((local_90 != '\0') && (local_98 != 0)) {
          FUN_00d50b20();
        }
        if (lVar3 != 0) {
          local_38 = '\0';
          local_40 = lVar3;
          FUN_00d21140();
          if ((local_38 != '\0') && (local_40 != 0)) {
            FUN_00d50b20();
          }
          FUN_00d50b20();
        }
      }
      FUN_00c6f7c0();
    }
    if (*(int *)((longlong)puVar2 + 0xc) != 0) {
      local_80 = '\0';
      local_88 = puVar2;
      FUN_00d92220();
      local_78 = local_68;
      local_70 = 0;
      if (local_60 == '\0') {
        if (local_68 != (longlong *)0x0) {
          FUN_00d50b00();
        }
      }
      else {
        local_60 = '\0';
      }
      local_70 = '\x01';
      FUN_00d95130();
      if ((local_70 != '\0') && (local_78 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_60 != '\0') && (local_68 != (longlong *)0x0)) {
        FUN_00d50b20();
      }
      if ((local_80 != '\0') && (local_88 != (undefined8 *)0x0)) {
        FUN_00d50b20();
      }
      goto LAB_00d2f244;
    }
  }
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
LAB_00d2f244:
  FUN_00d50b20();
  return unaff_RDI;
}


