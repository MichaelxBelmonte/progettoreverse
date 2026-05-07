// Function: FUN_01d11980
// Address: 01d11980
// Size: 518 bytes
// Class: GNValue


longlong * FUN_01d11980(undefined8 param_1)

{
  longlong *plVar1;
  longlong *plVar2;
  undefined1 auVar3 [16];
  char cVar4;
  longlong **pplVar5;
  longlong *unaff_RSI;
  longlong *unaff_RDI;
  longlong *plVar6;
  longlong lVar7;
  float fVar8;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined1 auVar9 [16];
  longlong *local_60;
  char local_58;
  longlong *local_48;
  char local_40;
  undefined4 local_34;
  
  FUN_01e40eb0();
  plVar6 = local_48;
  if ((local_40 != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (plVar6 == (longlong *)0x0) goto LAB_01d11b78;
  FUN_01e40eb0();
  (**(code **)(*local_60 + 0x4a0))();
  plVar6 = local_48;
  if (local_48 == (longlong *)0x0) {
    local_34 = (undefined4)CONCAT71((int7)((ulonglong)param_1 >> 8),1);
    plVar6 = (longlong *)0x0;
  }
  else {
    if (local_40 == '\0') {
      FUN_00d50b00();
      local_34 = 0;
      if ((local_40 == '\0') || (local_48 == (longlong *)0x0)) goto LAB_01d11a1a;
      FUN_00d50b20();
    }
    else {
      local_40 = '\0';
    }
    local_34 = 0;
  }
LAB_01d11a1a:
  if ((local_58 != '\0') && (local_60 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (0 < *(int *)((longlong)plVar6 + 0xc)) {
    lVar7 = 0;
    do {
      plVar1 = *(longlong **)(plVar6[2] + lVar7 * 8);
      if (plVar1 != unaff_RSI) {
        local_40 = '\0';
        local_48 = plVar1;
        FUN_00085720();
        pplVar5 = (longlong **)&DAT_02802688;
        if (plVar1 != (longlong *)0x0) {
          (**(code **)(*plVar1 + 0x360))();
          cVar4 = FUN_00e85ea0();
          pplVar5 = &local_48;
          if (cVar4 == '\0') {
            pplVar5 = (longlong **)&DAT_02802688;
          }
        }
        plVar2 = *pplVar5;
        if (*(char *)(pplVar5 + 1) == '\0') {
          if (plVar2 != (longlong *)0x0) {
            FUN_00d50b00();
          }
        }
        else {
          *(undefined1 *)(pplVar5 + 1) = 0;
          if ((local_40 != '\0') && (plVar1 != (longlong *)0x0)) {
            FUN_00d50b20();
          }
        }
        if (plVar2 != (longlong *)0x0) {
          fVar8 = (float)(**(code **)(*plVar2 + 0x4d8))();
          if (fVar8 < *(float *)((longlong)unaff_RSI + 0x10c)) {
            (**(code **)(*unaff_RSI + 0x4d8))();
            auVar3._4_4_ = extraout_XMM0_Db;
            auVar3._0_4_ = fVar8;
            auVar3._8_4_ = extraout_XMM0_Dc;
            auVar3._12_4_ = extraout_XMM0_Dd;
            auVar9._4_12_ = auVar3._4_12_;
            auVar9._0_4_ = fVar8 + DAT_024112b0;
            blendps(auVar9,auVar3,0xe);
            cVar4 = FUN_00d054a0();
            if (cVar4 != '\0') {
              *unaff_RDI = (longlong)plVar2;
              *(undefined1 *)(unaff_RDI + 1) = 1;
              if ((char)local_34 != '\0') {
                return unaff_RDI;
              }
              FUN_00d50b20();
              return unaff_RDI;
            }
          }
          FUN_00d50b20();
        }
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < *(int *)((longlong)plVar6 + 0xc));
  }
  if ((char)local_34 == '\0') {
    FUN_00d50b20();
  }
LAB_01d11b78:
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
  return unaff_RDI;
}


