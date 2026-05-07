// Function: FUN_019a9050
// Address: 019a9050
// Size: 813 bytes
// Class: MUEditorElementView


/* WARNING: Removing unreachable block (ram,0x019a925f) */
/* WARNING: Removing unreachable block (ram,0x019a926b) */

undefined8 * FUN_019a9050(pthread_key_t param_1)

{
  longlong lVar1;
  longlong lVar2;
  char cVar3;
  int iVar4;
  longlong *plVar5;
  void *pvVar6;
  undefined8 *puVar7;
  undefined *puVar8;
  longlong *unaff_RSI;
  undefined8 *unaff_RDI;
  longlong local_90;
  longlong local_88;
  longlong local_80;
  undefined8 local_78;
  undefined4 local_70;
  longlong local_68;
  char local_60;
  undefined8 *local_58;
  longlong local_50;
  char local_48;
  longlong local_40;
  char local_38;
  
  iVar4 = *(int *)(unaff_RSI[0x3d] + 0xc);
  if (iVar4 == 1) {
    FUN_00d23310();
    local_40 = CONCAT71(local_40._1_7_,(char)local_88);
    plVar5 = &local_88;
    if ((char)local_88 == '\0') {
      plVar5 = &local_40;
    }
    *(undefined1 *)plVar5 = 0;
    if (((char)local_88 != '\0') && (local_90 != 0)) {
      FUN_00d50b20();
    }
    local_48 = 0;
    if (((char)local_40 == '\0') && (local_90 != 0)) {
      FUN_00d50b00();
    }
    local_50 = local_90;
    local_48 = '\x01';
    cVar3 = (**(code **)(*unaff_RSI + 0x9a0))();
    if ((local_48 != '\0') && (local_50 != 0)) {
      FUN_00d50b20();
    }
    if (cVar3 != '\0') {
      FUN_00d23310();
      plVar5 = &local_88;
      if ((char)local_88 == '\0') {
        plVar5 = &local_40;
      }
      local_40 = CONCAT71(local_40._1_7_,(char)local_88);
      *(undefined1 *)plVar5 = 0;
      if (((char)local_88 != '\0') && (local_90 != 0)) {
        FUN_00d50b20();
      }
      pvVar6 = _pthread_getspecific(param_1);
      if (pvVar6 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_012e5ae0();
      if ((char)local_40 == '\0') {
        return unaff_RDI;
      }
      if (local_90 == 0) {
        return unaff_RDI;
      }
      FUN_00d50b20();
      return unaff_RDI;
    }
    iVar4 = *(int *)(unaff_RSI[0x3d] + 0xc);
  }
  if (iVar4 < 2) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
  }
  else {
    puVar7 = (undefined8 *)FUN_00e8fc40();
    FUN_00d4ff40();
    puVar8 = &DAT_02572358;
    *puVar7 = &DAT_02572358;
    local_58 = puVar7;
    (*DAT_02572370)();
    lVar1 = unaff_RSI[0x3d];
    if (lVar1 != 0) {
      local_88._0_1_ = 0;
      local_70 = 0;
      local_78 = 0;
      local_80 = lVar1;
      if (0 < *(int *)(lVar1 + 0xc)) {
        iVar4 = 0;
        do {
          cVar3 = (**(code **)(*unaff_RSI + 0x9a0))();
          if (cVar3 != '\0') {
            pvVar6 = _pthread_getspecific((pthread_key_t)puVar8);
            if (pvVar6 != (void *)0x0) {
              FUN_00e8b990();
            }
            FUN_012e5ae0();
            lVar2 = local_68;
            if (local_60 == '\0') {
              if (local_68 != 0) {
                FUN_00d50b00();
              }
            }
            else {
              local_60 = '\0';
            }
            local_40 = lVar2;
            local_38 = '\0';
            FUN_00d214d0();
            if ((local_38 != '\0') && (local_40 != 0)) {
              FUN_00d50b20();
            }
            if (lVar2 != 0) {
              FUN_00d50b20();
            }
            if ((local_60 != '\0') && (local_68 != 0)) {
              FUN_00d50b20();
            }
          }
          iVar4 = iVar4 + 1;
          local_78 = CONCAT44(local_78._4_4_,iVar4);
        } while (iVar4 < *(int *)(lVar1 + 0xc));
      }
      FUN_000be170();
    }
    *unaff_RDI = local_58;
    *(undefined1 *)(unaff_RDI + 1) = 1;
  }
  return unaff_RDI;
}


