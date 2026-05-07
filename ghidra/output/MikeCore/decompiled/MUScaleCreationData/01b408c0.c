// Function: FUN_01b408c0
// Address: 01b408c0
// Size: 1279 bytes
// Class: MUScaleCreationData


/* WARNING: Removing unreachable block (ram,0x01b40d31) */
/* WARNING: Removing unreachable block (ram,0x01b40d3d) */
/* WARNING: Removing unreachable block (ram,0x01b40d9a) */
/* WARNING: Removing unreachable block (ram,0x01b40da6) */

undefined4 FUN_01b408c0(undefined4 param_1,uint param_2)

{
  bool bVar1;
  longlong lVar2;
  longlong lVar3;
  char cVar4;
  int iVar5;
  void *pvVar6;
  pthread_key_t in_ECX;
  longlong unaff_RDI;
  longlong lVar7;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar8;
  longlong local_70;
  char local_68;
  undefined4 local_60;
  undefined4 local_5c;
  longlong local_58;
  char local_50;
  longlong local_48;
  longlong local_40;
  char local_38;
  
  if ((param_2 != 0) && (*(longlong *)(unaff_RDI + 0x70) != 0)) {
    FUN_01d2ac30();
    lVar3 = local_40;
    if ((local_38 == '\0') &&
       (((local_40 != 0 && (FUN_00d50b00(), local_38 != '\0')) && (local_40 != 0)))) {
      FUN_00d50b20();
    }
    FUN_01ad3cb0();
    local_48 = local_40;
    if (((local_38 == '\0') && (local_40 != 0)) &&
       ((FUN_00d50b00(), local_38 != '\0' && (local_40 != 0)))) {
      FUN_00d50b20();
    }
    iVar5 = FUN_01b21650();
    param_1 = extraout_XMM0_Da;
    if (local_48 != 0) {
      if (iVar5 == -1000000) {
        local_60 = DAT_024112ac;
      }
      else {
        pvVar6 = _pthread_getspecific(in_ECX);
        if ((pvVar6 != (void *)0x0) && (lVar7 = FUN_00e8b990(), lVar7 != 0)) {
          in_ECX = (pthread_key_t)local_48;
        }
        local_60 = FUN_01742280();
      }
      pvVar6 = _pthread_getspecific(in_ECX);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      cVar4 = FUN_01b42160();
      if (cVar4 == '\0') {
        pvVar6 = _pthread_getspecific(in_ECX);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_5c = FUN_01b42000();
        pvVar6 = _pthread_getspecific(in_ECX);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01b42060();
        pvVar6 = _pthread_getspecific(in_ECX);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        uVar8 = FUN_01b41f90();
        pvVar6 = _pthread_getspecific(in_ECX);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01b420c0();
        local_70 = local_58;
        local_68 = 0;
        if (local_50 == '\0') {
          if (local_58 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        local_68 = '\x01';
        uVar8 = FUN_0173d440(local_60,uVar8,&local_70);
        lVar7 = local_40;
        if (local_40 == 0) {
          bVar1 = false;
          lVar7 = 0;
        }
        else if (local_38 == '\0') {
          uVar8 = FUN_00d50b00();
          bVar1 = true;
          if ((local_38 != '\0') && (local_40 != 0)) {
            uVar8 = FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
          bVar1 = true;
        }
        if ((local_68 != '\0') && (local_70 != 0)) {
          uVar8 = FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          uVar8 = FUN_00d50b20();
        }
      }
      else {
        pvVar6 = _pthread_getspecific(in_ECX);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        local_5c = FUN_01b41ec0();
        pvVar6 = _pthread_getspecific(in_ECX);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01b41f30();
        pvVar6 = _pthread_getspecific(in_ECX);
        if (pvVar6 != (void *)0x0) {
          FUN_00e8b990();
        }
        FUN_01b420c0();
        lVar2 = local_58;
        if (local_50 == '\0') {
          if (local_58 != 0) {
            FUN_00d50b00();
          }
        }
        else {
          local_50 = '\0';
        }
        uVar8 = FUN_0173c840(local_60,local_5c);
        lVar7 = local_40;
        if (local_40 == 0) {
          bVar1 = false;
          lVar7 = 0;
        }
        else if (local_38 == '\0') {
          uVar8 = FUN_00d50b00();
          bVar1 = true;
          if ((local_38 != '\0') && (local_40 != 0)) {
            uVar8 = FUN_00d50b20();
          }
        }
        else {
          local_38 = '\0';
          bVar1 = true;
        }
        if (lVar2 != 0) {
          uVar8 = FUN_00d50b20();
        }
        if ((local_50 != '\0') && (local_58 != 0)) {
          uVar8 = FUN_00d50b20();
        }
      }
      if ((lVar7 != 0) && (FUN_01ad6060(uVar8,2), bVar1)) {
        FUN_00d50b20();
      }
      param_1 = FUN_00d50b20();
    }
    if (lVar3 != 0) {
      param_1 = FUN_00d50b20();
    }
  }
  uVar8 = FUN_01ad0160(param_1,param_2 & 0xff);
  return uVar8;
}


