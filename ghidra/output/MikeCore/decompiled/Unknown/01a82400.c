// Function: FUN_01a82400
// Address: 01a82400
// Size: 908 bytes
// Class: Unknown


undefined8 * FUN_01a82400(undefined8 param_1,undefined8 param_2)

{
  double dVar1;
  longlong *plVar2;
  void *pvVar3;
  pthread_key_t in_ECX;
  undefined8 *unaff_RDI;
  longlong lVar4;
  longlong *plVar5;
  float fVar6;
  undefined4 uVar7;
  float fVar8;
  longlong *local_90;
  char local_88;
  double local_80;
  longlong *local_78;
  ulonglong local_70;
  undefined8 local_68;
  longlong *local_58;
  char local_50;
  longlong *local_48;
  undefined8 local_40;
  undefined4 local_38;
  
  uVar7 = (undefined4)((ulonglong)param_1 >> 0x20);
  fVar6 = (float)((ulonglong)param_2 >> 0x20);
  local_68 = (longlong *)CONCAT44(uVar7,uVar7);
  FUN_01e3f820();
  if ((DAT_02390d30 + fVar6 * DAT_0239011c < SUB84(local_68,0)) ||
     (fVar6 = fVar6 * DAT_0239011c + DAT_023b8b2c, SUB84(local_68,0) < fVar6)) {
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    return unaff_RDI;
  }
  FUN_01989f80(fVar6,local_68);
  plVar5 = local_58;
  if ((((local_50 == '\0') && (local_58 != (longlong *)0x0)) && (FUN_00d50b00(), local_50 != '\0'))
     && (local_58 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_68 = plVar5;
  FUN_01a82280();
  plVar2 = local_58;
  if (local_50 == '\0') {
    if (local_58 == (longlong *)0x0) goto LAB_01a82766;
    FUN_00d50b00();
    if ((local_50 != '\0') && (local_58 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else if (local_58 == (longlong *)0x0) {
LAB_01a82766:
    *(undefined1 *)(unaff_RDI + 1) = 0;
    *unaff_RDI = 0;
    goto joined_r0x01a82775;
  }
  local_70 = (ulonglong)*(uint *)((longlong)plVar2 + 0xc);
  local_50 = '\0';
  local_58 = (longlong *)0x0;
  local_48 = plVar2;
  local_38 = 0;
  local_40 = 0;
  if (0 < *(int *)((longlong)plVar2 + 0xc)) {
    local_70 = (ulonglong)(*(uint *)((longlong)plVar2 + 0xc) - 1);
    lVar4 = 0;
    local_78 = plVar2;
    do {
      plVar5 = *(longlong **)(local_78[2] + lVar4 * 8);
      local_58 = plVar5;
      pvVar3 = _pthread_getspecific(in_ECX);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      pvVar3 = _pthread_getspecific(in_ECX);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_013faed0();
      local_80 = (double)FUN_0128e5a0();
      pvVar3 = _pthread_getspecific(in_ECX);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      dVar1 = (double)FUN_0125a280();
      uVar7 = (**(code **)(*local_68 + 0x938))(SUB84(local_80 + dVar1,0));
      local_80 = (double)CONCAT44(local_80._4_4_,uVar7);
      pvVar3 = _pthread_getspecific(in_ECX);
      if (pvVar3 != (void *)0x0) {
        FUN_00e8b990();
      }
      FUN_0125a280();
      fVar6 = (float)(**(code **)(*local_68 + 0x938))();
      fVar8 = (local_80._0_4_ - fVar6) + DAT_023b8b2c;
      if (((fVar8 < (float)param_1) && ((float)param_1 < (local_80._0_4_ - fVar6) + DAT_02390d30))
         && (((int)lVar4 != 0 && ((int)local_70 != (int)lVar4)))) {
        local_88 = '\0';
        local_90 = plVar5;
        FUN_01a82870(fVar8,&local_90);
        plVar5 = local_68;
        if ((local_88 != '\0') && (local_90 != (longlong *)0x0)) {
          FUN_00d50b20();
        }
        FUN_01a81420();
        goto LAB_01a82757;
      }
      lVar4 = lVar4 + 1;
      local_40 = CONCAT44(local_40._4_4_,(int)lVar4);
    } while ((int)lVar4 < *(int *)((longlong)local_78 + 0xc));
  }
  FUN_01a81420();
  *(undefined1 *)(unaff_RDI + 1) = 0;
  *unaff_RDI = 0;
  plVar5 = local_68;
LAB_01a82757:
  FUN_00d50b20();
joined_r0x01a82775:
  if (plVar5 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  return unaff_RDI;
}


