// Function: FUN_014163e0
// Address: 014163e0
// Size: 1295 bytes
// Class: MUSpectrumShaper


/* WARNING: Removing unreachable block (ram,0x014166fc) */
/* WARNING: Removing unreachable block (ram,0x01416708) */

void FUN_014163e0(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  void *pvVar3;
  longlong lVar4;
  undefined8 uVar5;
  longlong *plVar6;
  pthread_key_t pVar7;
  char *pcVar8;
  longlong *unaff_RSI;
  longlong local_e0;
  char local_d8;
  longlong *local_b0;
  char local_a8;
  longlong local_a0;
  char local_98;
  longlong local_90;
  char local_88;
  undefined8 local_80;
  longlong *local_78;
  longlong local_70;
  char local_68;
  longlong *local_60;
  longlong *local_58;
  undefined4 local_4c;
  longlong *local_48;
  char local_40 [8];
  char local_38 [8];
  
  FUN_00d3ecc0();
  plVar6 = local_48;
  lVar4 = DAT_027c0df0;
  if (DAT_027c0df0 != 0) {
    FUN_00d50b00();
  }
  cVar2 = (**(code **)(*plVar6 + 0x50))();
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (cVar2 == '\0') goto LAB_01416872;
  FUN_00d3ecf0();
  plVar6 = local_48;
  if ((((local_40[0] == '\0') && (local_48 != (longlong *)0x0)) &&
      (FUN_00d50b00(), local_40[0] != '\0')) && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  local_78 = plVar6;
  FUN_00d3ed20();
  lVar4 = DAT_027c0df8;
  if (DAT_027c0df8 != 0) {
    FUN_00d50b00();
  }
  FUN_000175c0();
  local_60 = local_48;
  if (local_40[0] == '\0') {
    if (((local_48 != (longlong *)0x0) && (FUN_00d50b00(), local_40[0] != '\0')) &&
       (local_48 != (longlong *)0x0)) {
      FUN_00d50b20();
    }
  }
  else {
    local_40[0] = '\0';
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  FUN_013fb420();
  pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  lVar4 = FUN_00e8b990();
  uVar5 = 0;
  if (lVar4 != 0) {
    uVar5 = FUN_00d50b00();
  }
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    uVar5 = FUN_00d50b20();
  }
  local_4c = (undefined4)CONCAT71((int7)((ulonglong)uVar5 >> 8),1);
  if (lVar4 == 0) {
LAB_0141660d:
    local_58 = (longlong *)0x0;
    local_80 = 0;
  }
  else {
    FUN_00cb1f10();
    local_58 = local_48;
    param_1 = local_48;
    if (local_48 == (longlong *)0x0) goto LAB_0141660d;
    plVar6 = local_48;
    if (((local_40[0] == '\0') && (plVar6 = (longlong *)FUN_00d50b00(), local_40[0] != '\0')) &&
       (local_48 != (longlong *)0x0)) {
      plVar6 = (longlong *)FUN_00d50b20();
    }
    local_80 = CONCAT71((int7)((ulonglong)plVar6 >> 8),1);
    FUN_00db3260();
    local_4c = 0;
  }
  FUN_013fb420();
  pvVar3 = _pthread_getspecific((pthread_key_t)param_1);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_01328c30();
  FUN_00d23310();
  plVar6 = local_48;
  pVar7 = (pthread_key_t)CONCAT71((int7)((ulonglong)param_1 >> 8),local_40[0]);
  pcVar8 = local_38;
  if (local_40[0] != '\0') {
    pcVar8 = local_40;
  }
  local_38[0] = local_40[0];
  *pcVar8 = '\0';
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  pvVar3 = _pthread_getspecific(pVar7);
  if (pvVar3 != (void *)0x0) {
    FUN_00e8b990();
  }
  FUN_014bc1d0();
  if ((local_38[0] != '\0') && (plVar6 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((local_68 != '\0') && (local_70 != 0)) {
    FUN_00d50b20();
  }
  if ((local_d8 != '\0') && (local_e0 != 0)) {
    FUN_00d50b20();
  }
  if ((char)local_4c == '\0') {
    FUN_00db3270();
  }
  FUN_00d403d0();
  plVar6 = local_78;
  lVar1 = DAT_027c0e00;
  if (DAT_027c0e00 != 0) {
    FUN_00d50b00();
  }
  local_b0 = plVar6;
  local_a8 = '\0';
  local_a0 = 0;
  local_98 = '\0';
  FUN_00d40470(&local_a0,&local_b0,1,3);
  if ((local_98 != '\0') && (local_a0 != 0)) {
    FUN_00d50b20();
  }
  if ((local_a8 != '\0') && (local_b0 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if (lVar1 != 0) {
    FUN_00d50b20();
  }
  if ((local_40[0] != '\0') && (local_48 != (longlong *)0x0)) {
    FUN_00d50b20();
  }
  if ((char)local_4c == '\0') {
    FUN_00d50b20();
  }
  if (lVar4 != 0) {
    FUN_00d50b20();
  }
  if (local_60 != (longlong *)0x0) {
    FUN_00d50b20();
  }
  if (plVar6 != (longlong *)0x0) {
    FUN_00d50b20();
  }
LAB_01416872:
  local_90 = *unaff_RSI;
  local_88 = '\0';
  FUN_00d530a0();
  if ((local_88 != '\0') && (local_90 != 0)) {
    FUN_00d50b20();
  }
  return;
}


